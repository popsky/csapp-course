
echoservers.o：     文件格式 elf64-x86-64


Disassembly of section .text:

0000000000000000 <main>:
/* $begin echoserversmain */

int byte_cnt = 0; /* Counts total bytes received by server */

int main(int argc, char **argv)
{
   0:	55                   	push   %rbp
   1:	48 89 e5             	mov    %rsp,%rbp
   4:	48 81 ec b0 00 00 00 	sub    $0xb0,%rsp
   b:	89 bd 5c ff ff ff    	mov    %edi,-0xa4(%rbp)
  11:	48 89 b5 50 ff ff ff 	mov    %rsi,-0xb0(%rbp)
  18:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  1f:	00 00 
  21:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  25:	31 c0                	xor    %eax,%eax
    int listenfd, connfd;
    socklen_t clientlen;
    struct sockaddr_storage clientaddr;
    static pool pool;

    if (argc != 2) {
  27:	83 bd 5c ff ff ff 02 	cmpl   $0x2,-0xa4(%rbp)
  2e:	74 2d                	je     5d <main+0x5d>
	fprintf(stderr, "usage: %s <port>\n", argv[0]);
  30:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
  37:	48 8b 10             	mov    (%rax),%rdx
  3a:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 41 <main+0x41>
  41:	be 00 00 00 00       	mov    $0x0,%esi
  46:	48 89 c7             	mov    %rax,%rdi
  49:	b8 00 00 00 00       	mov    $0x0,%eax
  4e:	e8 00 00 00 00       	callq  53 <main+0x53>
	exit(0);
  53:	bf 00 00 00 00       	mov    $0x0,%edi
  58:	e8 00 00 00 00       	callq  5d <main+0x5d>
    }
    listenfd = Open_listenfd(argv[1]);
  5d:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
  64:	48 83 c0 08          	add    $0x8,%rax
  68:	48 8b 00             	mov    (%rax),%rax
  6b:	48 89 c7             	mov    %rax,%rdi
  6e:	e8 00 00 00 00       	callq  73 <main+0x73>
  73:	89 85 68 ff ff ff    	mov    %eax,-0x98(%rbp)
    init_pool(listenfd, &pool); //line:conc:echoservers:initpool
  79:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
  7f:	be 00 00 00 00       	mov    $0x0,%esi
  84:	89 c7                	mov    %eax,%edi
  86:	e8 00 00 00 00       	callq  8b <main+0x8b>

    while (1) {
	    /* Wait for listening/connected descriptor(s) to become ready */
	    pool.ready_set = pool.read_set;
  8b:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 92 <main+0x92>
  92:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 99 <main+0x99>
  99:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # a0 <main+0xa0>
  a0:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # a7 <main+0xa7>
  a7:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # ae <main+0xae>
  ae:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # b5 <main+0xb5>
  b5:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # bc <main+0xbc>
  bc:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # c3 <main+0xc3>
  c3:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # ca <main+0xca>
  ca:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # d1 <main+0xd1>
  d1:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # d8 <main+0xd8>
  d8:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # df <main+0xdf>
  df:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # e6 <main+0xe6>
  e6:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # ed <main+0xed>
  ed:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # f4 <main+0xf4>
  f4:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # fb <main+0xfb>
  fb:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 102 <main+0x102>
 102:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 109 <main+0x109>
 109:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 110 <main+0x110>
 110:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 117 <main+0x117>
 117:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 11e <main+0x11e>
 11e:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 125 <main+0x125>
 125:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 12c <main+0x12c>
 12c:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 133 <main+0x133>
 133:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 13a <main+0x13a>
 13a:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 141 <main+0x141>
 141:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 148 <main+0x148>
 148:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 14f <main+0x14f>
 14f:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 156 <main+0x156>
 156:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 15d <main+0x15d>
 15d:	48 8b 05 00 00 00 00 	mov    0x0(%rip),%rax        # 164 <main+0x164>
 164:	48 89 05 00 00 00 00 	mov    %rax,0x0(%rip)        # 16b <main+0x16b>
	    pool.nready = Select(pool.maxfd+1, &pool.ready_set, NULL, NULL, NULL);
 16b:	8b 05 00 00 00 00    	mov    0x0(%rip),%eax        # 171 <main+0x171>
 171:	83 c0 01             	add    $0x1,%eax
 174:	41 b8 00 00 00 00    	mov    $0x0,%r8d
 17a:	b9 00 00 00 00       	mov    $0x0,%ecx
 17f:	ba 00 00 00 00       	mov    $0x0,%edx
 184:	be 00 00 00 00       	mov    $0x0,%esi
 189:	89 c7                	mov    %eax,%edi
 18b:	e8 00 00 00 00       	callq  190 <main+0x190>
 190:	89 05 00 00 00 00    	mov    %eax,0x0(%rip)        # 196 <main+0x196>

	    /* If listening descriptor ready, add new client to pool */
	    if (FD_ISSET(listenfd, &pool.ready_set)) { //line:conc:echoservers:listenfdready
 196:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
 19c:	8d 50 3f             	lea    0x3f(%rax),%edx
 19f:	85 c0                	test   %eax,%eax
 1a1:	0f 48 c2             	cmovs  %edx,%eax
 1a4:	c1 f8 06             	sar    $0x6,%eax
 1a7:	48 98                	cltq   
 1a9:	48 83 c0 10          	add    $0x10,%rax
 1ad:	48 8b 34 c5 00 00 00 	mov    0x0(,%rax,8),%rsi
 1b4:	00 
 1b5:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
 1bb:	99                   	cltd   
 1bc:	c1 ea 1a             	shr    $0x1a,%edx
 1bf:	01 d0                	add    %edx,%eax
 1c1:	83 e0 3f             	and    $0x3f,%eax
 1c4:	29 d0                	sub    %edx,%eax
 1c6:	89 c1                	mov    %eax,%ecx
 1c8:	48 d3 fe             	sar    %cl,%rsi
 1cb:	48 89 f0             	mov    %rsi,%rax
 1ce:	83 e0 01             	and    $0x1,%eax
 1d1:	48 85 c0             	test   %rax,%rax
 1d4:	74 40                	je     216 <main+0x216>
            clientlen = sizeof(struct sockaddr_storage);
 1d6:	c7 85 64 ff ff ff 80 	movl   $0x80,-0x9c(%rbp)
 1dd:	00 00 00 
	        connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen); //line:conc:echoservers:accept
 1e0:	48 8d 95 64 ff ff ff 	lea    -0x9c(%rbp),%rdx
 1e7:	48 8d 8d 70 ff ff ff 	lea    -0x90(%rbp),%rcx
 1ee:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
 1f4:	48 89 ce             	mov    %rcx,%rsi
 1f7:	89 c7                	mov    %eax,%edi
 1f9:	e8 00 00 00 00       	callq  1fe <main+0x1fe>
 1fe:	89 85 6c ff ff ff    	mov    %eax,-0x94(%rbp)
	        add_client(connfd, &pool); //line:conc:echoservers:addclient
 204:	8b 85 6c ff ff ff    	mov    -0x94(%rbp),%eax
 20a:	be 00 00 00 00       	mov    $0x0,%esi
 20f:	89 c7                	mov    %eax,%edi
 211:	e8 00 00 00 00       	callq  216 <main+0x216>
	    }

	    /* Echo a text line from each ready connected descriptor */
	    check_clients(&pool); //line:conc:echoservers:checkclients
 216:	bf 00 00 00 00       	mov    $0x0,%edi
 21b:	e8 00 00 00 00       	callq  220 <main+0x220>
    }
 220:	e9 66 fe ff ff       	jmpq   8b <main+0x8b>

0000000000000225 <init_pool>:
}
/* $end echoserversmain */

/* $begin init_pool */
void init_pool(int listenfd, pool *p)
{
 225:	55                   	push   %rbp
 226:	48 89 e5             	mov    %rsp,%rbp
 229:	89 7d ec             	mov    %edi,-0x14(%rbp)
 22c:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    /* Initially, there are no connected descriptors */
    int i;
    p->maxi = -1;                   //line:conc:echoservers:beginempty
 230:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 234:	c7 80 0c 01 00 00 ff 	movl   $0xffffffff,0x10c(%rax)
 23b:	ff ff ff 
    for (i=0; i< FD_SETSIZE; i++)
 23e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
 245:	eb 19                	jmp    260 <init_pool+0x3b>
	    p->clientfd[i] = -1;        //line:conc:echoservers:endempty
 247:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 24b:	8b 55 f4             	mov    -0xc(%rbp),%edx
 24e:	48 63 d2             	movslq %edx,%rdx
 251:	48 83 c2 44          	add    $0x44,%rdx
 255:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%rax,%rdx,4)
void init_pool(int listenfd, pool *p)
{
    /* Initially, there are no connected descriptors */
    int i;
    p->maxi = -1;                   //line:conc:echoservers:beginempty
    for (i=0; i< FD_SETSIZE; i++)
 25c:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
 260:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%rbp)
 267:	7e de                	jle    247 <init_pool+0x22>
	    p->clientfd[i] = -1;        //line:conc:echoservers:endempty

    /* Initially, listenfd is only member of select read set */
    p->maxfd = listenfd;            //line:conc:echoservers:begininit
 269:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 26d:	8b 55 ec             	mov    -0x14(%rbp),%edx
 270:	89 10                	mov    %edx,(%rax)
    FD_ZERO(&p->read_set);
 272:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 276:	48 8d 70 08          	lea    0x8(%rax),%rsi
 27a:	b8 00 00 00 00       	mov    $0x0,%eax
 27f:	ba 10 00 00 00       	mov    $0x10,%edx
 284:	48 89 d1             	mov    %rdx,%rcx
 287:	48 89 f7             	mov    %rsi,%rdi
 28a:	fc                   	cld    
 28b:	f3 48 ab             	rep stos %rax,%es:(%rdi)
 28e:	89 f8                	mov    %edi,%eax
 290:	89 ca                	mov    %ecx,%edx
 292:	89 55 f8             	mov    %edx,-0x8(%rbp)
 295:	89 45 fc             	mov    %eax,-0x4(%rbp)
    FD_SET(listenfd, &p->read_set); //line:conc:echoservers:endinit
 298:	8b 45 ec             	mov    -0x14(%rbp),%eax
 29b:	8d 50 3f             	lea    0x3f(%rax),%edx
 29e:	85 c0                	test   %eax,%eax
 2a0:	0f 48 c2             	cmovs  %edx,%eax
 2a3:	c1 f8 06             	sar    $0x6,%eax
 2a6:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
 2aa:	48 63 c8             	movslq %eax,%rcx
 2ad:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
 2b2:	8b 55 ec             	mov    -0x14(%rbp),%edx
 2b5:	89 d1                	mov    %edx,%ecx
 2b7:	c1 f9 1f             	sar    $0x1f,%ecx
 2ba:	c1 e9 1a             	shr    $0x1a,%ecx
 2bd:	01 ca                	add    %ecx,%edx
 2bf:	83 e2 3f             	and    $0x3f,%edx
 2c2:	29 ca                	sub    %ecx,%edx
 2c4:	bf 01 00 00 00       	mov    $0x1,%edi
 2c9:	89 d1                	mov    %edx,%ecx
 2cb:	48 d3 e7             	shl    %cl,%rdi
 2ce:	48 89 fa             	mov    %rdi,%rdx
 2d1:	48 09 d6             	or     %rdx,%rsi
 2d4:	48 89 f1             	mov    %rsi,%rcx
 2d7:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
 2db:	48 98                	cltq   
 2dd:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)
}
 2e2:	5d                   	pop    %rbp
 2e3:	c3                   	retq   

00000000000002e4 <add_client>:
/* $end init_pool */

/* $begin add_client */
void add_client(int connfd, pool *p)
{
 2e4:	55                   	push   %rbp
 2e5:	48 89 e5             	mov    %rsp,%rbp
 2e8:	48 83 ec 20          	sub    $0x20,%rsp
 2ec:	89 7d ec             	mov    %edi,-0x14(%rbp)
 2ef:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    int i;
    p->nready--;
 2f3:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 2f7:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
 2fd:	8d 50 ff             	lea    -0x1(%rax),%edx
 300:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 304:	89 90 08 01 00 00    	mov    %edx,0x108(%rax)
    for (i = 0; i < FD_SETSIZE; i++)  /* Find an available slot */
 30a:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
 311:	e9 dd 00 00 00       	jmpq   3f3 <add_client+0x10f>
	if (p->clientfd[i] < 0) {
 316:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 31a:	8b 55 fc             	mov    -0x4(%rbp),%edx
 31d:	48 63 d2             	movslq %edx,%rdx
 320:	48 83 c2 44          	add    $0x44,%rdx
 324:	8b 04 90             	mov    (%rax,%rdx,4),%eax
 327:	85 c0                	test   %eax,%eax
 329:	0f 89 c0 00 00 00    	jns    3ef <add_client+0x10b>
	    /* Add connected descriptor to the pool */
	    p->clientfd[i] = connfd;                 //line:conc:echoservers:beginaddclient
 32f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 333:	8b 55 fc             	mov    -0x4(%rbp),%edx
 336:	48 63 d2             	movslq %edx,%rdx
 339:	48 8d 4a 44          	lea    0x44(%rdx),%rcx
 33d:	8b 55 ec             	mov    -0x14(%rbp),%edx
 340:	89 14 88             	mov    %edx,(%rax,%rcx,4)
	    Rio_readinitb(&p->clientrio[i], connfd); //line:conc:echoservers:endaddclient
 343:	8b 45 fc             	mov    -0x4(%rbp),%eax
 346:	48 98                	cltq   
 348:	48 c1 e0 04          	shl    $0x4,%rax
 34c:	48 89 c2             	mov    %rax,%rdx
 34f:	48 c1 e2 09          	shl    $0x9,%rdx
 353:	48 01 d0             	add    %rdx,%rax
 356:	48 8d 90 10 11 00 00 	lea    0x1110(%rax),%rdx
 35d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 361:	48 01 c2             	add    %rax,%rdx
 364:	8b 45 ec             	mov    -0x14(%rbp),%eax
 367:	89 c6                	mov    %eax,%esi
 369:	48 89 d7             	mov    %rdx,%rdi
 36c:	e8 00 00 00 00       	callq  371 <add_client+0x8d>

	    /* Add the descriptor to descriptor set */
	    FD_SET(connfd, &p->read_set); //line:conc:echoservers:addconnfd
 371:	8b 45 ec             	mov    -0x14(%rbp),%eax
 374:	8d 50 3f             	lea    0x3f(%rax),%edx
 377:	85 c0                	test   %eax,%eax
 379:	0f 48 c2             	cmovs  %edx,%eax
 37c:	c1 f8 06             	sar    $0x6,%eax
 37f:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
 383:	48 63 c8             	movslq %eax,%rcx
 386:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
 38b:	8b 55 ec             	mov    -0x14(%rbp),%edx
 38e:	89 d1                	mov    %edx,%ecx
 390:	c1 f9 1f             	sar    $0x1f,%ecx
 393:	c1 e9 1a             	shr    $0x1a,%ecx
 396:	01 ca                	add    %ecx,%edx
 398:	83 e2 3f             	and    $0x3f,%edx
 39b:	29 ca                	sub    %ecx,%edx
 39d:	bf 01 00 00 00       	mov    $0x1,%edi
 3a2:	89 d1                	mov    %edx,%ecx
 3a4:	48 d3 e7             	shl    %cl,%rdi
 3a7:	48 89 fa             	mov    %rdi,%rdx
 3aa:	48 09 d6             	or     %rdx,%rsi
 3ad:	48 89 f1             	mov    %rsi,%rcx
 3b0:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
 3b4:	48 98                	cltq   
 3b6:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)

	    /* Update max descriptor and pool highwater mark */
	    if (connfd > p->maxfd) //line:conc:echoservers:beginmaxfd
 3bb:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 3bf:	8b 00                	mov    (%rax),%eax
 3c1:	3b 45 ec             	cmp    -0x14(%rbp),%eax
 3c4:	7d 09                	jge    3cf <add_client+0xeb>
		p->maxfd = connfd; //line:conc:echoservers:endmaxfd
 3c6:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 3ca:	8b 55 ec             	mov    -0x14(%rbp),%edx
 3cd:	89 10                	mov    %edx,(%rax)
	    if (i > p->maxi)       //line:conc:echoservers:beginmaxi
 3cf:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 3d3:	8b 80 0c 01 00 00    	mov    0x10c(%rax),%eax
 3d9:	3b 45 fc             	cmp    -0x4(%rbp),%eax
 3dc:	7d 0f                	jge    3ed <add_client+0x109>
		p->maxi = i;       //line:conc:echoservers:endmaxi
 3de:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
 3e2:	8b 55 fc             	mov    -0x4(%rbp),%edx
 3e5:	89 90 0c 01 00 00    	mov    %edx,0x10c(%rax)
	    break;
 3eb:	eb 13                	jmp    400 <add_client+0x11c>
 3ed:	eb 11                	jmp    400 <add_client+0x11c>
/* $begin add_client */
void add_client(int connfd, pool *p)
{
    int i;
    p->nready--;
    for (i = 0; i < FD_SETSIZE; i++)  /* Find an available slot */
 3ef:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
 3f3:	81 7d fc ff 03 00 00 	cmpl   $0x3ff,-0x4(%rbp)
 3fa:	0f 8e 16 ff ff ff    	jle    316 <add_client+0x32>
		p->maxfd = connfd; //line:conc:echoservers:endmaxfd
	    if (i > p->maxi)       //line:conc:echoservers:beginmaxi
		p->maxi = i;       //line:conc:echoservers:endmaxi
	    break;
	}
    if (i == FD_SETSIZE) /* Couldn't find an empty slot */
 400:	81 7d fc 00 04 00 00 	cmpl   $0x400,-0x4(%rbp)
 407:	75 0a                	jne    413 <add_client+0x12f>
	app_error("add_client error: Too many clients");
 409:	bf 00 00 00 00       	mov    $0x0,%edi
 40e:	e8 00 00 00 00       	callq  413 <add_client+0x12f>
}
 413:	c9                   	leaveq 
 414:	c3                   	retq   

0000000000000415 <check_clients>:
/* $end add_client */

/* $begin check_clients */
void check_clients(pool *p)
{
 415:	55                   	push   %rbp
 416:	48 89 e5             	mov    %rsp,%rbp
 419:	48 81 ec 40 40 00 00 	sub    $0x4040,%rsp
 420:	48 89 bd c8 bf ff ff 	mov    %rdi,-0x4038(%rbp)
 427:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
 42e:	00 00 
 430:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
 434:	31 c0                	xor    %eax,%eax
    int i, connfd, n;
    char buf[MAXLINE];
    rio_t rio;

    for (i = 0; (i <= p->maxi) && (p->nready > 0); i++) {
 436:	c7 85 d4 bf ff ff 00 	movl   $0x0,-0x402c(%rbp)
 43d:	00 00 00 
 440:	e9 e4 01 00 00       	jmpq   629 <check_clients+0x214>
	connfd = p->clientfd[i];
 445:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 44c:	8b 95 d4 bf ff ff    	mov    -0x402c(%rbp),%edx
 452:	48 63 d2             	movslq %edx,%rdx
 455:	48 83 c2 44          	add    $0x44,%rdx
 459:	8b 04 90             	mov    (%rax,%rdx,4),%eax
 45c:	89 85 d8 bf ff ff    	mov    %eax,-0x4028(%rbp)
	rio = p->clientrio[i];
 462:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
 469:	8b 85 d4 bf ff ff    	mov    -0x402c(%rbp),%eax
 46f:	48 98                	cltq   
 471:	48 c1 e0 04          	shl    $0x4,%rax
 475:	48 89 c1             	mov    %rax,%rcx
 478:	48 c1 e1 09          	shl    $0x9,%rcx
 47c:	48 01 c8             	add    %rcx,%rax
 47f:	48 01 d0             	add    %rdx,%rax
 482:	48 8d 90 10 11 00 00 	lea    0x1110(%rax),%rdx
 489:	48 8d 85 e0 df ff ff 	lea    -0x2020(%rbp),%rax
 490:	48 89 d1             	mov    %rdx,%rcx
 493:	ba 10 20 00 00       	mov    $0x2010,%edx
 498:	48 89 ce             	mov    %rcx,%rsi
 49b:	48 89 c7             	mov    %rax,%rdi
 49e:	e8 00 00 00 00       	callq  4a3 <check_clients+0x8e>

	/* If the descriptor is ready, echo a text line from it */
	if ((connfd > 0) && (FD_ISSET(connfd, &p->ready_set))) {
 4a3:	83 bd d8 bf ff ff 00 	cmpl   $0x0,-0x4028(%rbp)
 4aa:	0f 8e 72 01 00 00    	jle    622 <check_clients+0x20d>
 4b0:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
 4b6:	8d 50 3f             	lea    0x3f(%rax),%edx
 4b9:	85 c0                	test   %eax,%eax
 4bb:	0f 48 c2             	cmovs  %edx,%eax
 4be:	c1 f8 06             	sar    $0x6,%eax
 4c1:	89 c2                	mov    %eax,%edx
 4c3:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 4ca:	48 63 d2             	movslq %edx,%rdx
 4cd:	48 83 c2 10          	add    $0x10,%rdx
 4d1:	48 8b 74 d0 08       	mov    0x8(%rax,%rdx,8),%rsi
 4d6:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
 4dc:	99                   	cltd   
 4dd:	c1 ea 1a             	shr    $0x1a,%edx
 4e0:	01 d0                	add    %edx,%eax
 4e2:	83 e0 3f             	and    $0x3f,%eax
 4e5:	29 d0                	sub    %edx,%eax
 4e7:	89 c1                	mov    %eax,%ecx
 4e9:	48 d3 fe             	sar    %cl,%rsi
 4ec:	48 89 f0             	mov    %rsi,%rax
 4ef:	83 e0 01             	and    $0x1,%eax
 4f2:	48 85 c0             	test   %rax,%rax
 4f5:	0f 84 27 01 00 00    	je     622 <check_clients+0x20d>
	    p->nready--;
 4fb:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 502:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
 508:	8d 50 ff             	lea    -0x1(%rax),%edx
 50b:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 512:	89 90 08 01 00 00    	mov    %edx,0x108(%rax)
	    if ((n = Rio_readlineb(&rio, buf, MAXLINE)) != 0) {
 518:	48 8d 8d e0 bf ff ff 	lea    -0x4020(%rbp),%rcx
 51f:	48 8d 85 e0 df ff ff 	lea    -0x2020(%rbp),%rax
 526:	ba 00 20 00 00       	mov    $0x2000,%edx
 52b:	48 89 ce             	mov    %rcx,%rsi
 52e:	48 89 c7             	mov    %rax,%rdi
 531:	e8 00 00 00 00       	callq  536 <check_clients+0x121>
 536:	89 85 dc bf ff ff    	mov    %eax,-0x4024(%rbp)
 53c:	83 bd dc bf ff ff 00 	cmpl   $0x0,-0x4024(%rbp)
 543:	74 5c                	je     5a1 <check_clients+0x18c>
		byte_cnt += n; //line:conc:echoservers:beginecho
 545:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 54b <check_clients+0x136>
 54b:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
 551:	01 d0                	add    %edx,%eax
 553:	89 05 00 00 00 00    	mov    %eax,0x0(%rip)        # 559 <check_clients+0x144>
		printf("Server received %d (%d total) bytes on fd %d\n",
 559:	8b 15 00 00 00 00    	mov    0x0(%rip),%edx        # 55f <check_clients+0x14a>
 55f:	8b 8d d8 bf ff ff    	mov    -0x4028(%rbp),%ecx
 565:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
 56b:	89 c6                	mov    %eax,%esi
 56d:	bf 00 00 00 00       	mov    $0x0,%edi
 572:	b8 00 00 00 00       	mov    $0x0,%eax
 577:	e8 00 00 00 00       	callq  57c <check_clients+0x167>
		       n, byte_cnt, connfd);
		Rio_writen(connfd, buf, n); //line:conc:echoservers:endecho
 57c:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
 582:	48 63 d0             	movslq %eax,%rdx
 585:	48 8d 8d e0 bf ff ff 	lea    -0x4020(%rbp),%rcx
 58c:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
 592:	48 89 ce             	mov    %rcx,%rsi
 595:	89 c7                	mov    %eax,%edi
 597:	e8 00 00 00 00       	callq  59c <check_clients+0x187>
 59c:	e9 81 00 00 00       	jmpq   622 <check_clients+0x20d>
	    }

	    /* EOF detected, remove descriptor from pool */
	    else {
		Close(connfd); //line:conc:echoservers:closeconnfd
 5a1:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
 5a7:	89 c7                	mov    %eax,%edi
 5a9:	e8 00 00 00 00       	callq  5ae <check_clients+0x199>
		FD_CLR(connfd, &p->read_set); //line:conc:echoservers:beginremove
 5ae:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
 5b4:	8d 50 3f             	lea    0x3f(%rax),%edx
 5b7:	85 c0                	test   %eax,%eax
 5b9:	0f 48 c2             	cmovs  %edx,%eax
 5bc:	c1 f8 06             	sar    $0x6,%eax
 5bf:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
 5c6:	48 63 c8             	movslq %eax,%rcx
 5c9:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
 5ce:	8b 95 d8 bf ff ff    	mov    -0x4028(%rbp),%edx
 5d4:	89 d1                	mov    %edx,%ecx
 5d6:	c1 f9 1f             	sar    $0x1f,%ecx
 5d9:	c1 e9 1a             	shr    $0x1a,%ecx
 5dc:	01 ca                	add    %ecx,%edx
 5de:	83 e2 3f             	and    $0x3f,%edx
 5e1:	29 ca                	sub    %ecx,%edx
 5e3:	bf 01 00 00 00       	mov    $0x1,%edi
 5e8:	89 d1                	mov    %edx,%ecx
 5ea:	48 d3 e7             	shl    %cl,%rdi
 5ed:	48 89 fa             	mov    %rdi,%rdx
 5f0:	48 f7 d2             	not    %rdx
 5f3:	48 21 d6             	and    %rdx,%rsi
 5f6:	48 89 f1             	mov    %rsi,%rcx
 5f9:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
 600:	48 98                	cltq   
 602:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)
		p->clientfd[i] = -1;          //line:conc:echoservers:endremove
 607:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 60e:	8b 95 d4 bf ff ff    	mov    -0x402c(%rbp),%edx
 614:	48 63 d2             	movslq %edx,%rdx
 617:	48 83 c2 44          	add    $0x44,%rdx
 61b:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%rax,%rdx,4)
{
    int i, connfd, n;
    char buf[MAXLINE];
    rio_t rio;

    for (i = 0; (i <= p->maxi) && (p->nready > 0); i++) {
 622:	83 85 d4 bf ff ff 01 	addl   $0x1,-0x402c(%rbp)
 629:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 630:	8b 80 0c 01 00 00    	mov    0x10c(%rax),%eax
 636:	3b 85 d4 bf ff ff    	cmp    -0x402c(%rbp),%eax
 63c:	7c 15                	jl     653 <check_clients+0x23e>
 63e:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
 645:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
 64b:	85 c0                	test   %eax,%eax
 64d:	0f 8f f2 fd ff ff    	jg     445 <check_clients+0x30>
		FD_CLR(connfd, &p->read_set); //line:conc:echoservers:beginremove
		p->clientfd[i] = -1;          //line:conc:echoservers:endremove
	    }
	}
    }
}
 653:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 657:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
 65e:	00 00 
 660:	74 05                	je     667 <check_clients+0x252>
 662:	e8 00 00 00 00       	callq  667 <check_clients+0x252>
 667:	c9                   	leaveq 
 668:	c3                   	retq   
