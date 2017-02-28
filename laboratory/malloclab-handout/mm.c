/*
 * mm-naive.c - The fastest, least memory-efficient malloc package.
 *
 * In this naive approach, a block is allocated by simply incrementing
 * the brk pointer.  A block is pure payload. There are no headers or
 * footers.  Blocks are never coalesced or reused. Realloc is
 * implemented directly using mm_malloc and mm_free.
 *
 * NOTE TO STUDENTS: Replace this header comment with your own header
 * comment that gives a high level description of your solution.
 */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <string.h>

#include "mm.h"
#include "memlib.h"

#define MAX(one,two) ((one) > (two) ? (one) : (two))
/* chuck size */
#define CHUCKSIZE (1 << 12)  // 4KB
team_t team = {
        /* Team name */
        "ateam",
            /* First member's full name */
            "Harry Bovik",
                /* First member's email address */
                "bovik@cs.cmu.edu",
                    /* Second member's full name (leave blank if none) */
                    "",
                        /* Second member's email address (leave blank if none) */
                        ""

};

/* single word (4) or double word (8) alignment 1*/
#define ALIGNMENT 8

/* rounds up to the nearest multiple of ALIGNMENT */
#define ALIGN(size) (((size) + (ALIGNMENT-1)) & ~0x7)


#define SIZE_T_SIZE (ALIGN(sizeof(size_t)))

#define WSIZE 4 // 单字
#define DSIZE 8 // 双字

#define GET(p)  (*(unsigned int *)(p))
#define SET(p,val)  (*(unsigned int *)(p) = (val))

/* 组合大小，前块分配，分配字段成一个头 */
#define PACK(size,allo) ((size) | (allo))

/* 读出在地址p的大小字段，分配字段，前块分配字段 */
#define GET_SIZE(p)  (GET(p) & ~7)
#define GET_ALLOC(p)  (GET(p) & 1)
#define GET_PREALLOC(p)  (GET(p) & 2)

/* 给出块地址，返回头地址及尾地址 */
#define HDRP(p)  ((char *)(p) - WSIZE)
#define FTRP(p)  ((char *)(p) - DSIZE + GET_SIZE(HDRP(p)))

/* 给出块地址，计算前一块及后一块的块地址 */
#define PREV_BLKP(p) ((char *)(p) - GET_SIZE(((char *)(p) - DSIZE)))
//#define NEXT_BLKP(bp)  ((char *)(bp) + GET_SIZE(((char *)(bp) - WSIZE))) //line:vm:mm:nextblkp
#define NEXT_BLKP(p)  ((char *)(p) + GET_SIZE(HDRP(p)))


/* Global value */
char *free_head = 0; // Always point to the first free block
char *heap_listp = 0;// Always point to the first block

/* Helper function */
static void *extend_heap(size_t);
static void coalesce(void);
static void *find_fit(size_t,void **);
static void *place(void *,size_t,void *);
static void insert_list(void *);
/*
 * mm_init - initialize the malloc package.
 */

void print_free(){
    int i;
    void *bp= free_head;
    printf("free list:\n");
    for(;bp;bp=GET(bp))
        printf("%p,size = %d,allo? %d,next = %p\n",bp,GET_SIZE(HDRP(bp)),GET_ALLOC(HDRP(bp)),GET(bp));

    printf("block: \n");
    bp = heap_listp;
    for(;GET_SIZE(HDRP(bp))>0;bp = NEXT_BLKP(bp)){
        printf("%p,size = %d,allo? %d,next = %p\n",bp,GET_SIZE(HDRP(bp)),GET_ALLOC(HDRP(bp)),GET(bp));
    }
    printf("end of print_free\n");
}
int mm_init(void)
{
    char *bp;
    if((heap_listp = mem_sbrk(4 * WSIZE)) == (void *)-1)
        return -1;
    SET(heap_listp,0);  //  使后面的块双字对齐
    SET((heap_listp + WSIZE),PACK(DSIZE,1));  // 序言头
    SET((heap_listp + DSIZE),PACK(DSIZE,1));  // 序言尾
    SET((heap_listp + 3*WSIZE),PACK(0,1));    // 尾序
    heap_listp += 2*WSIZE;

    if((free_head = extend_heap(CHUCKSIZE/WSIZE)) == NULL)
        return -1;

    SET(free_head,0);  // 自由块队列只有一块
    return 0;
}

/*
 * mm_malloc - Allocate a block by incrementing the brk pointer.
 *     Always allocate a block whose size is a multiple of the alignment.
 */
void *mm_malloc(size_t size)
{
    if(size == 0)
        return NULL;
    size_t newsize = ALIGN(size + SIZE_T_SIZE),chuck;
    void *bp,*pp;
    if(heap_listp == 0)
        mm_init();

    if((bp = find_fit(newsize,&pp)) != NULL)
        return place(bp,newsize,pp);

    coalesce();  // 如果第一次找不到，将自由队列合并后再找一次
    if((bp = find_fit(newsize,&pp)) != NULL)
        return place(bp,newsize,pp);

    chuck = MAX(newsize,CHUCKSIZE);
    if((bp = extend_heap(chuck/WSIZE)))
        return place(bp,newsize,NULL);

    return NULL;
}

/*
 * rm_free - Freeing a block does nothing.
 */
void mm_free(void *ptr)
{
    SET(HDRP(ptr),PACK(GET_SIZE(HDRP(ptr)),0));
    SET(FTRP(ptr),PACK(GET_SIZE(HDRP(ptr)),0));
    insert_list(ptr);
    return;
}

/*
 * mm_realloc - Implemented simply in terms of mm_malloc and mm_free
 */
void *mm_realloc(void *ptr, size_t size)
{
    char *oldptr = ptr,*newptr,*p;
    int i;
    size_t oldBlockSize,newBlockSize,pading;

    oldBlockSize = GET_SIZE(HDRP(oldptr));
    newBlockSize = ALIGN(size + WSIZE);

    if(oldBlockSize > newBlockSize && (oldBlockSize - newBlockSize) >= 2*DSIZE) {  // 原来的块要大于请求块，且能分出一个自由块，将原块拆分后分配
        newptr = place(oldptr,newBlockSize,NULL);
        pading = newBlockSize - WSIZE - size;
        p = newptr + size;
        for(i=0;i<pading;i++)
            p[i] = (char)0;

        return newptr;
    }

    size_t copySize = oldBlockSize - WSIZE;
    if((newptr = mm_malloc(size)) == NULL)
        return NULL;
    if (size < copySize)
      copySize = size;
    memcpy(newptr, oldptr, copySize);
    mm_free(oldptr);
    return newptr;
}


/*
 *  extend_heap - extend heap with free block,and return its block pointer
 */
static void *extend_heap(size_t words){
    size_t size,prev_a;
    void *bp;
    size = ALIGN((words * WSIZE));

    if((bp = mem_sbrk(size)) == (void *)-1)
        return NULL;

    SET(HDRP(bp),PACK(size,0)); // 新自由块
    SET(FTRP(bp),PACK(size,0));
    SET(HDRP(NEXT_BLKP(bp)),PACK(0,1));  //  新尾序

    return bp;
}

/*
 * coalesce - Coalesced the free list
 */
static void coalesce(){
    void *bp,*pp,*cp; // bp指向当前处理块，pp指向前一个自由块，cp指向当前处理块的后续自由块
    bp = NEXT_BLKP(heap_listp);
    pp = NULL;
    if(free_head == NULL) // 自由队列为空时，直接退出
        return;
    free_head = NULL;
    size_t size;
    for(;GET_SIZE(HDRP(bp)) != 0;bp = NEXT_BLKP(bp)) {
        if(free_head == NULL && !GET_ALLOC(HDRP(bp)))
            free_head = bp;

        size = 0;
        cp = bp;
        while(!GET_ALLOC(HDRP(cp))){
            size += GET_SIZE(HDRP(cp));
            cp = NEXT_BLKP(cp);
        }

        if(size == 0)
            continue;

        SET(HDRP(bp),PACK(size,0));
        SET(FTRP(bp),PACK(size,0));
        SET(bp,0);
        if(pp)
            SET(pp,bp);
        pp = bp;
    }
}

/* insert_list - Insert block to free list */
void insert_list(void *ptr) {
    SET(ptr,free_head);
    free_head = ptr;
}

/*
 * find_fit - Search free list, return the block pointer to the first block whose at least size byte,
 * if ppp is no NULL, the ppp is store the prev block pointer of the return block.
 */

static void *find_fit(size_t size,void **ppp) {
    void *pp,*cp;
    for(cp = free_head,pp = NULL;cp; cp = (void *)GET(cp)) {
        if(GET_SIZE(HDRP(cp)) >= size){
            break;
        }
        pp = cp;
    }
    if(ppp)
        *ppp = pp;
    return cp;
}

/*
 * place - Place block of asize bytes at start of free block bp
 *         and split if remainder would be at least minimum block size
 */

static void *place(void *bp,size_t asize,void *pp) {
    size_t remainder = GET_SIZE(HDRP(bp)) - asize;
    if(remainder >= 2*DSIZE){
        SET(HDRP(bp),PACK(asize,1));
        SET(HDRP(NEXT_BLKP(bp)),PACK(remainder,0));
        SET(FTRP(NEXT_BLKP(bp)),PACK(remainder,0));
        SET(NEXT_BLKP(bp),GET(bp));
        if(pp)
            SET(pp,NEXT_BLKP(bp));
        else {
            if(free_head == bp)
                free_head = NEXT_BLKP(bp);
            else
                insert_list(NEXT_BLKP(bp));
        }
    } else {
        SET(HDRP(bp),PACK(GET_SIZE(HDRP(bp)),1));
        if(pp)
            SET(pp,GET(bp));
        else if(free_head == bp)
            free_head = GET(bp);
    }
    return bp;
}
