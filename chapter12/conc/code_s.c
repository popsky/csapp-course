
echoservers：     文件格式 elf64-x86-64


Disassembly of section .init:

0000000000400890 <_init>:
  400890:	48 83 ec 08          	sub    $0x8,%rsp
  400894:	48 8b 05 5d 17 20 00 	mov    0x20175d(%rip),%rax        # 601ff8 <_DYNAMIC+0x1f0>
  40089b:	48 85 c0             	test   %rax,%rax
  40089e:	74 05                	je     4008a5 <_init+0x15>
  4008a0:	e8 9b 00 00 00       	callq  400940 <__gmon_start__@plt>
  4008a5:	48 83 c4 08          	add    $0x8,%rsp
  4008a9:	c3                   	retq   

Disassembly of section .plt:

00000000004008b0 <Rio_readinitb@plt-0x10>:
  4008b0:	ff 35 52 17 20 00    	pushq  0x201752(%rip)        # 602008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4008b6:	ff 25 54 17 20 00    	jmpq   *0x201754(%rip)        # 602010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4008bc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004008c0 <Rio_readinitb@plt>:
  4008c0:	ff 25 52 17 20 00    	jmpq   *0x201752(%rip)        # 602018 <_GLOBAL_OFFSET_TABLE_+0x18>
  4008c6:	68 00 00 00 00       	pushq  $0x0
  4008cb:	e9 e0 ff ff ff       	jmpq   4008b0 <_init+0x20>

00000000004008d0 <Accept@plt>:
  4008d0:	ff 25 4a 17 20 00    	jmpq   *0x20174a(%rip)        # 602020 <_GLOBAL_OFFSET_TABLE_+0x20>
  4008d6:	68 01 00 00 00       	pushq  $0x1
  4008db:	e9 d0 ff ff ff       	jmpq   4008b0 <_init+0x20>

00000000004008e0 <__stack_chk_fail@plt>:
  4008e0:	ff 25 42 17 20 00    	jmpq   *0x201742(%rip)        # 602028 <_GLOBAL_OFFSET_TABLE_+0x28>
  4008e6:	68 02 00 00 00       	pushq  $0x2
  4008eb:	e9 c0 ff ff ff       	jmpq   4008b0 <_init+0x20>

00000000004008f0 <printf@plt>:
  4008f0:	ff 25 3a 17 20 00    	jmpq   *0x20173a(%rip)        # 602030 <_GLOBAL_OFFSET_TABLE_+0x30>
  4008f6:	68 03 00 00 00       	pushq  $0x3
  4008fb:	e9 b0 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400900 <Rio_readlineb@plt>:
  400900:	ff 25 32 17 20 00    	jmpq   *0x201732(%rip)        # 602038 <_GLOBAL_OFFSET_TABLE_+0x38>
  400906:	68 04 00 00 00       	pushq  $0x4
  40090b:	e9 a0 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400910 <Open_listenfd@plt>:
  400910:	ff 25 2a 17 20 00    	jmpq   *0x20172a(%rip)        # 602040 <_GLOBAL_OFFSET_TABLE_+0x40>
  400916:	68 05 00 00 00       	pushq  $0x5
  40091b:	e9 90 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400920 <__libc_start_main@plt>:
  400920:	ff 25 22 17 20 00    	jmpq   *0x201722(%rip)        # 602048 <_GLOBAL_OFFSET_TABLE_+0x48>
  400926:	68 06 00 00 00       	pushq  $0x6
  40092b:	e9 80 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400930 <fprintf@plt>:
  400930:	ff 25 1a 17 20 00    	jmpq   *0x20171a(%rip)        # 602050 <_GLOBAL_OFFSET_TABLE_+0x50>
  400936:	68 07 00 00 00       	pushq  $0x7
  40093b:	e9 70 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400940 <__gmon_start__@plt>:
  400940:	ff 25 12 17 20 00    	jmpq   *0x201712(%rip)        # 602058 <_GLOBAL_OFFSET_TABLE_+0x58>
  400946:	68 08 00 00 00       	pushq  $0x8
  40094b:	e9 60 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400950 <memcpy@plt>:
  400950:	ff 25 0a 17 20 00    	jmpq   *0x20170a(%rip)        # 602060 <_GLOBAL_OFFSET_TABLE_+0x60>
  400956:	68 09 00 00 00       	pushq  $0x9
  40095b:	e9 50 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400960 <Rio_writen@plt>:
  400960:	ff 25 02 17 20 00    	jmpq   *0x201702(%rip)        # 602068 <_GLOBAL_OFFSET_TABLE_+0x68>
  400966:	68 0a 00 00 00       	pushq  $0xa
  40096b:	e9 40 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400970 <app_error@plt>:
  400970:	ff 25 fa 16 20 00    	jmpq   *0x2016fa(%rip)        # 602070 <_GLOBAL_OFFSET_TABLE_+0x70>
  400976:	68 0b 00 00 00       	pushq  $0xb
  40097b:	e9 30 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400980 <Select@plt>:
  400980:	ff 25 f2 16 20 00    	jmpq   *0x2016f2(%rip)        # 602078 <_GLOBAL_OFFSET_TABLE_+0x78>
  400986:	68 0c 00 00 00       	pushq  $0xc
  40098b:	e9 20 ff ff ff       	jmpq   4008b0 <_init+0x20>

0000000000400990 <Close@plt>:
  400990:	ff 25 ea 16 20 00    	jmpq   *0x2016ea(%rip)        # 602080 <_GLOBAL_OFFSET_TABLE_+0x80>
  400996:	68 0d 00 00 00       	pushq  $0xd
  40099b:	e9 10 ff ff ff       	jmpq   4008b0 <_init+0x20>

00000000004009a0 <exit@plt>:
  4009a0:	ff 25 e2 16 20 00    	jmpq   *0x2016e2(%rip)        # 602088 <_GLOBAL_OFFSET_TABLE_+0x88>
  4009a6:	68 0e 00 00 00       	pushq  $0xe
  4009ab:	e9 00 ff ff ff       	jmpq   4008b0 <_init+0x20>

Disassembly of section .text:

00000000004009b0 <_start>:
  4009b0:	31 ed                	xor    %ebp,%ebp
  4009b2:	49 89 d1             	mov    %rdx,%r9
  4009b5:	5e                   	pop    %rsi
  4009b6:	48 89 e2             	mov    %rsp,%rdx
  4009b9:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  4009bd:	50                   	push   %rax
  4009be:	54                   	push   %rsp
  4009bf:	49 c7 c0 80 11 40 00 	mov    $0x401180,%r8
  4009c6:	48 c7 c1 10 11 40 00 	mov    $0x401110,%rcx
  4009cd:	48 c7 c7 9d 0a 40 00 	mov    $0x400a9d,%rdi
  4009d4:	e8 47 ff ff ff       	callq  400920 <__libc_start_main@plt>
  4009d9:	f4                   	hlt    
  4009da:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004009e0 <deregister_tm_clones>:
  4009e0:	b8 a7 20 60 00       	mov    $0x6020a7,%eax
  4009e5:	55                   	push   %rbp
  4009e6:	48 2d a0 20 60 00    	sub    $0x6020a0,%rax
  4009ec:	48 83 f8 0e          	cmp    $0xe,%rax
  4009f0:	48 89 e5             	mov    %rsp,%rbp
  4009f3:	77 02                	ja     4009f7 <deregister_tm_clones+0x17>
  4009f5:	5d                   	pop    %rbp
  4009f6:	c3                   	retq   
  4009f7:	b8 00 00 00 00       	mov    $0x0,%eax
  4009fc:	48 85 c0             	test   %rax,%rax
  4009ff:	74 f4                	je     4009f5 <deregister_tm_clones+0x15>
  400a01:	5d                   	pop    %rbp
  400a02:	bf a0 20 60 00       	mov    $0x6020a0,%edi
  400a07:	ff e0                	jmpq   *%rax
  400a09:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400a10 <register_tm_clones>:
  400a10:	b8 a0 20 60 00       	mov    $0x6020a0,%eax
  400a15:	55                   	push   %rbp
  400a16:	48 2d a0 20 60 00    	sub    $0x6020a0,%rax
  400a1c:	48 c1 f8 03          	sar    $0x3,%rax
  400a20:	48 89 e5             	mov    %rsp,%rbp
  400a23:	48 89 c2             	mov    %rax,%rdx
  400a26:	48 c1 ea 3f          	shr    $0x3f,%rdx
  400a2a:	48 01 d0             	add    %rdx,%rax
  400a2d:	48 d1 f8             	sar    %rax
  400a30:	75 02                	jne    400a34 <register_tm_clones+0x24>
  400a32:	5d                   	pop    %rbp
  400a33:	c3                   	retq   
  400a34:	ba 00 00 00 00       	mov    $0x0,%edx
  400a39:	48 85 d2             	test   %rdx,%rdx
  400a3c:	74 f4                	je     400a32 <register_tm_clones+0x22>
  400a3e:	5d                   	pop    %rbp
  400a3f:	48 89 c6             	mov    %rax,%rsi
  400a42:	bf a0 20 60 00       	mov    $0x6020a0,%edi
  400a47:	ff e2                	jmpq   *%rdx
  400a49:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400a50 <__do_global_dtors_aux>:
  400a50:	80 3d 51 16 20 00 00 	cmpb   $0x0,0x201651(%rip)        # 6020a8 <completed.6973>
  400a57:	75 11                	jne    400a6a <__do_global_dtors_aux+0x1a>
  400a59:	55                   	push   %rbp
  400a5a:	48 89 e5             	mov    %rsp,%rbp
  400a5d:	e8 7e ff ff ff       	callq  4009e0 <deregister_tm_clones>
  400a62:	5d                   	pop    %rbp
  400a63:	c6 05 3e 16 20 00 01 	movb   $0x1,0x20163e(%rip)        # 6020a8 <completed.6973>
  400a6a:	f3 c3                	repz retq 
  400a6c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400a70 <frame_dummy>:
  400a70:	48 83 3d 88 13 20 00 	cmpq   $0x0,0x201388(%rip)        # 601e00 <__JCR_END__>
  400a77:	00 
  400a78:	74 1e                	je     400a98 <frame_dummy+0x28>
  400a7a:	b8 00 00 00 00       	mov    $0x0,%eax
  400a7f:	48 85 c0             	test   %rax,%rax
  400a82:	74 14                	je     400a98 <frame_dummy+0x28>
  400a84:	55                   	push   %rbp
  400a85:	bf 00 1e 60 00       	mov    $0x601e00,%edi
  400a8a:	48 89 e5             	mov    %rsp,%rbp
  400a8d:	ff d0                	callq  *%rax
  400a8f:	5d                   	pop    %rbp
  400a90:	e9 7b ff ff ff       	jmpq   400a10 <register_tm_clones>
  400a95:	0f 1f 00             	nopl   (%rax)
  400a98:	e9 73 ff ff ff       	jmpq   400a10 <register_tm_clones>

0000000000400a9d <main>:
/* $begin echoserversmain */

int byte_cnt = 0; /* Counts total bytes received by server */

int main(int argc, char **argv)
{
  400a9d:	55                   	push   %rbp
  400a9e:	48 89 e5             	mov    %rsp,%rbp
  400aa1:	48 81 ec b0 00 00 00 	sub    $0xb0,%rsp
  400aa8:	89 bd 5c ff ff ff    	mov    %edi,-0xa4(%rbp)
  400aae:	48 89 b5 50 ff ff ff 	mov    %rsi,-0xb0(%rbp)
  400ab5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400abc:	00 00 
  400abe:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400ac2:	31 c0                	xor    %eax,%eax
    int listenfd, connfd;
    socklen_t clientlen;
    struct sockaddr_storage clientaddr;
    static pool pool;

    if (argc != 2) {
  400ac4:	83 bd 5c ff ff ff 02 	cmpl   $0x2,-0xa4(%rbp)
  400acb:	74 2d                	je     400afa <main+0x5d>
	fprintf(stderr, "usage: %s <port>\n", argv[0]);
  400acd:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
  400ad4:	48 8b 10             	mov    (%rax),%rdx
  400ad7:	48 8b 05 c2 15 20 00 	mov    0x2015c2(%rip),%rax        # 6020a0 <__TMC_END__>
  400ade:	be 98 11 40 00       	mov    $0x401198,%esi
  400ae3:	48 89 c7             	mov    %rax,%rdi
  400ae6:	b8 00 00 00 00       	mov    $0x0,%eax
  400aeb:	e8 40 fe ff ff       	callq  400930 <fprintf@plt>
	exit(0);
  400af0:	bf 00 00 00 00       	mov    $0x0,%edi
  400af5:	e8 a6 fe ff ff       	callq  4009a0 <exit@plt>
    }
    listenfd = Open_listenfd(argv[1]);
  400afa:	48 8b 85 50 ff ff ff 	mov    -0xb0(%rbp),%rax
  400b01:	48 83 c0 08          	add    $0x8,%rax
  400b05:	48 8b 00             	mov    (%rax),%rax
  400b08:	48 89 c7             	mov    %rax,%rdi
  400b0b:	e8 00 fe ff ff       	callq  400910 <Open_listenfd@plt>
  400b10:	89 85 68 ff ff ff    	mov    %eax,-0x98(%rbp)
    init_pool(listenfd, &pool); //line:conc:echoservers:initpool
  400b16:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
  400b1c:	be e0 20 60 00       	mov    $0x6020e0,%esi
  400b21:	89 c7                	mov    %eax,%edi
  400b23:	e8 9a 01 00 00       	callq  400cc2 <init_pool>

    while (1) {
	    /* Wait for listening/connected descriptor(s) to become ready */
	    pool.ready_set = pool.read_set;
  400b28:	48 8b 05 b9 15 20 00 	mov    0x2015b9(%rip),%rax        # 6020e8 <pool.6804+0x8>
  400b2f:	48 89 05 32 16 20 00 	mov    %rax,0x201632(%rip)        # 602168 <pool.6804+0x88>
  400b36:	48 8b 05 b3 15 20 00 	mov    0x2015b3(%rip),%rax        # 6020f0 <pool.6804+0x10>
  400b3d:	48 89 05 2c 16 20 00 	mov    %rax,0x20162c(%rip)        # 602170 <pool.6804+0x90>
  400b44:	48 8b 05 ad 15 20 00 	mov    0x2015ad(%rip),%rax        # 6020f8 <pool.6804+0x18>
  400b4b:	48 89 05 26 16 20 00 	mov    %rax,0x201626(%rip)        # 602178 <pool.6804+0x98>
  400b52:	48 8b 05 a7 15 20 00 	mov    0x2015a7(%rip),%rax        # 602100 <pool.6804+0x20>
  400b59:	48 89 05 20 16 20 00 	mov    %rax,0x201620(%rip)        # 602180 <pool.6804+0xa0>
  400b60:	48 8b 05 a1 15 20 00 	mov    0x2015a1(%rip),%rax        # 602108 <pool.6804+0x28>
  400b67:	48 89 05 1a 16 20 00 	mov    %rax,0x20161a(%rip)        # 602188 <pool.6804+0xa8>
  400b6e:	48 8b 05 9b 15 20 00 	mov    0x20159b(%rip),%rax        # 602110 <pool.6804+0x30>
  400b75:	48 89 05 14 16 20 00 	mov    %rax,0x201614(%rip)        # 602190 <pool.6804+0xb0>
  400b7c:	48 8b 05 95 15 20 00 	mov    0x201595(%rip),%rax        # 602118 <pool.6804+0x38>
  400b83:	48 89 05 0e 16 20 00 	mov    %rax,0x20160e(%rip)        # 602198 <pool.6804+0xb8>
  400b8a:	48 8b 05 8f 15 20 00 	mov    0x20158f(%rip),%rax        # 602120 <pool.6804+0x40>
  400b91:	48 89 05 08 16 20 00 	mov    %rax,0x201608(%rip)        # 6021a0 <pool.6804+0xc0>
  400b98:	48 8b 05 89 15 20 00 	mov    0x201589(%rip),%rax        # 602128 <pool.6804+0x48>
  400b9f:	48 89 05 02 16 20 00 	mov    %rax,0x201602(%rip)        # 6021a8 <pool.6804+0xc8>
  400ba6:	48 8b 05 83 15 20 00 	mov    0x201583(%rip),%rax        # 602130 <pool.6804+0x50>
  400bad:	48 89 05 fc 15 20 00 	mov    %rax,0x2015fc(%rip)        # 6021b0 <pool.6804+0xd0>
  400bb4:	48 8b 05 7d 15 20 00 	mov    0x20157d(%rip),%rax        # 602138 <pool.6804+0x58>
  400bbb:	48 89 05 f6 15 20 00 	mov    %rax,0x2015f6(%rip)        # 6021b8 <pool.6804+0xd8>
  400bc2:	48 8b 05 77 15 20 00 	mov    0x201577(%rip),%rax        # 602140 <pool.6804+0x60>
  400bc9:	48 89 05 f0 15 20 00 	mov    %rax,0x2015f0(%rip)        # 6021c0 <pool.6804+0xe0>
  400bd0:	48 8b 05 71 15 20 00 	mov    0x201571(%rip),%rax        # 602148 <pool.6804+0x68>
  400bd7:	48 89 05 ea 15 20 00 	mov    %rax,0x2015ea(%rip)        # 6021c8 <pool.6804+0xe8>
  400bde:	48 8b 05 6b 15 20 00 	mov    0x20156b(%rip),%rax        # 602150 <pool.6804+0x70>
  400be5:	48 89 05 e4 15 20 00 	mov    %rax,0x2015e4(%rip)        # 6021d0 <pool.6804+0xf0>
  400bec:	48 8b 05 65 15 20 00 	mov    0x201565(%rip),%rax        # 602158 <pool.6804+0x78>
  400bf3:	48 89 05 de 15 20 00 	mov    %rax,0x2015de(%rip)        # 6021d8 <pool.6804+0xf8>
  400bfa:	48 8b 05 5f 15 20 00 	mov    0x20155f(%rip),%rax        # 602160 <pool.6804+0x80>
  400c01:	48 89 05 d8 15 20 00 	mov    %rax,0x2015d8(%rip)        # 6021e0 <pool.6804+0x100>
	    pool.nready = Select(pool.maxfd+1, &pool.ready_set, NULL, NULL, NULL);
  400c08:	8b 05 d2 14 20 00    	mov    0x2014d2(%rip),%eax        # 6020e0 <pool.6804>
  400c0e:	83 c0 01             	add    $0x1,%eax
  400c11:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  400c17:	b9 00 00 00 00       	mov    $0x0,%ecx
  400c1c:	ba 00 00 00 00       	mov    $0x0,%edx
  400c21:	be 68 21 60 00       	mov    $0x602168,%esi
  400c26:	89 c7                	mov    %eax,%edi
  400c28:	e8 53 fd ff ff       	callq  400980 <Select@plt>
  400c2d:	89 05 b5 15 20 00    	mov    %eax,0x2015b5(%rip)        # 6021e8 <pool.6804+0x108>

	    /* If listening descriptor ready, add new client to pool */
	    if (FD_ISSET(listenfd, &pool.ready_set)) { //line:conc:echoservers:listenfdready
  400c33:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
  400c39:	8d 50 3f             	lea    0x3f(%rax),%edx
  400c3c:	85 c0                	test   %eax,%eax
  400c3e:	0f 48 c2             	cmovs  %edx,%eax
  400c41:	c1 f8 06             	sar    $0x6,%eax
  400c44:	48 98                	cltq   
  400c46:	48 83 c0 10          	add    $0x10,%rax
  400c4a:	48 8b 34 c5 e8 20 60 	mov    0x6020e8(,%rax,8),%rsi
  400c51:	00 
  400c52:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
  400c58:	99                   	cltd   
  400c59:	c1 ea 1a             	shr    $0x1a,%edx
  400c5c:	01 d0                	add    %edx,%eax
  400c5e:	83 e0 3f             	and    $0x3f,%eax
  400c61:	29 d0                	sub    %edx,%eax
  400c63:	89 c1                	mov    %eax,%ecx
  400c65:	48 d3 fe             	sar    %cl,%rsi
  400c68:	48 89 f0             	mov    %rsi,%rax
  400c6b:	83 e0 01             	and    $0x1,%eax
  400c6e:	48 85 c0             	test   %rax,%rax
  400c71:	74 40                	je     400cb3 <main+0x216>
            clientlen = sizeof(struct sockaddr_storage);
  400c73:	c7 85 64 ff ff ff 80 	movl   $0x80,-0x9c(%rbp)
  400c7a:	00 00 00 
	        connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen); //line:conc:echoservers:accept
  400c7d:	48 8d 95 64 ff ff ff 	lea    -0x9c(%rbp),%rdx
  400c84:	48 8d 8d 70 ff ff ff 	lea    -0x90(%rbp),%rcx
  400c8b:	8b 85 68 ff ff ff    	mov    -0x98(%rbp),%eax
  400c91:	48 89 ce             	mov    %rcx,%rsi
  400c94:	89 c7                	mov    %eax,%edi
  400c96:	e8 35 fc ff ff       	callq  4008d0 <Accept@plt>
  400c9b:	89 85 6c ff ff ff    	mov    %eax,-0x94(%rbp)
	        add_client(connfd, &pool); //line:conc:echoservers:addclient
  400ca1:	8b 85 6c ff ff ff    	mov    -0x94(%rbp),%eax
  400ca7:	be e0 20 60 00       	mov    $0x6020e0,%esi
  400cac:	89 c7                	mov    %eax,%edi
  400cae:	e8 ce 00 00 00       	callq  400d81 <add_client>
	    }

	    /* Echo a text line from each ready connected descriptor */
	    check_clients(&pool); //line:conc:echoservers:checkclients
  400cb3:	bf e0 20 60 00       	mov    $0x6020e0,%edi
  400cb8:	e8 f5 01 00 00       	callq  400eb2 <check_clients>
    }
  400cbd:	e9 66 fe ff ff       	jmpq   400b28 <main+0x8b>

0000000000400cc2 <init_pool>:
}
/* $end echoserversmain */

/* $begin init_pool */
void init_pool(int listenfd, pool *p)
{
  400cc2:	55                   	push   %rbp
  400cc3:	48 89 e5             	mov    %rsp,%rbp
  400cc6:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400cc9:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    /* Initially, there are no connected descriptors */
    int i;
    p->maxi = -1;                   //line:conc:echoservers:beginempty
  400ccd:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400cd1:	c7 80 0c 01 00 00 ff 	movl   $0xffffffff,0x10c(%rax)
  400cd8:	ff ff ff 
    for (i=0; i< FD_SETSIZE; i++)
  400cdb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%rbp)
  400ce2:	eb 19                	jmp    400cfd <init_pool+0x3b>
	    p->clientfd[i] = -1;        //line:conc:echoservers:endempty
  400ce4:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400ce8:	8b 55 f4             	mov    -0xc(%rbp),%edx
  400ceb:	48 63 d2             	movslq %edx,%rdx
  400cee:	48 83 c2 44          	add    $0x44,%rdx
  400cf2:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%rax,%rdx,4)
void init_pool(int listenfd, pool *p)
{
    /* Initially, there are no connected descriptors */
    int i;
    p->maxi = -1;                   //line:conc:echoservers:beginempty
    for (i=0; i< FD_SETSIZE; i++)
  400cf9:	83 45 f4 01          	addl   $0x1,-0xc(%rbp)
  400cfd:	81 7d f4 ff 03 00 00 	cmpl   $0x3ff,-0xc(%rbp)
  400d04:	7e de                	jle    400ce4 <init_pool+0x22>
	    p->clientfd[i] = -1;        //line:conc:echoservers:endempty

    /* Initially, listenfd is only member of select read set */
    p->maxfd = listenfd;            //line:conc:echoservers:begininit
  400d06:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d0a:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400d0d:	89 10                	mov    %edx,(%rax)
    FD_ZERO(&p->read_set);
  400d0f:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d13:	48 8d 70 08          	lea    0x8(%rax),%rsi
  400d17:	b8 00 00 00 00       	mov    $0x0,%eax
  400d1c:	ba 10 00 00 00       	mov    $0x10,%edx
  400d21:	48 89 d1             	mov    %rdx,%rcx
  400d24:	48 89 f7             	mov    %rsi,%rdi
  400d27:	fc                   	cld    
  400d28:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  400d2b:	89 f8                	mov    %edi,%eax
  400d2d:	89 ca                	mov    %ecx,%edx
  400d2f:	89 55 f8             	mov    %edx,-0x8(%rbp)
  400d32:	89 45 fc             	mov    %eax,-0x4(%rbp)
    FD_SET(listenfd, &p->read_set); //line:conc:echoservers:endinit
  400d35:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400d38:	8d 50 3f             	lea    0x3f(%rax),%edx
  400d3b:	85 c0                	test   %eax,%eax
  400d3d:	0f 48 c2             	cmovs  %edx,%eax
  400d40:	c1 f8 06             	sar    $0x6,%eax
  400d43:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  400d47:	48 63 c8             	movslq %eax,%rcx
  400d4a:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
  400d4f:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400d52:	89 d1                	mov    %edx,%ecx
  400d54:	c1 f9 1f             	sar    $0x1f,%ecx
  400d57:	c1 e9 1a             	shr    $0x1a,%ecx
  400d5a:	01 ca                	add    %ecx,%edx
  400d5c:	83 e2 3f             	and    $0x3f,%edx
  400d5f:	29 ca                	sub    %ecx,%edx
  400d61:	bf 01 00 00 00       	mov    $0x1,%edi
  400d66:	89 d1                	mov    %edx,%ecx
  400d68:	48 d3 e7             	shl    %cl,%rdi
  400d6b:	48 89 fa             	mov    %rdi,%rdx
  400d6e:	48 09 d6             	or     %rdx,%rsi
  400d71:	48 89 f1             	mov    %rsi,%rcx
  400d74:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  400d78:	48 98                	cltq   
  400d7a:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)
}
  400d7f:	5d                   	pop    %rbp
  400d80:	c3                   	retq   

0000000000400d81 <add_client>:
/* $end init_pool */

/* $begin add_client */
void add_client(int connfd, pool *p)
{
  400d81:	55                   	push   %rbp
  400d82:	48 89 e5             	mov    %rsp,%rbp
  400d85:	48 83 ec 20          	sub    $0x20,%rsp
  400d89:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400d8c:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
    int i;
    p->nready--;
  400d90:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400d94:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
  400d9a:	8d 50 ff             	lea    -0x1(%rax),%edx
  400d9d:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400da1:	89 90 08 01 00 00    	mov    %edx,0x108(%rax)
    for (i = 0; i < FD_SETSIZE; i++)  /* Find an available slot */
  400da7:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%rbp)
  400dae:	e9 dd 00 00 00       	jmpq   400e90 <add_client+0x10f>
	if (p->clientfd[i] < 0) {
  400db3:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400db7:	8b 55 fc             	mov    -0x4(%rbp),%edx
  400dba:	48 63 d2             	movslq %edx,%rdx
  400dbd:	48 83 c2 44          	add    $0x44,%rdx
  400dc1:	8b 04 90             	mov    (%rax,%rdx,4),%eax
  400dc4:	85 c0                	test   %eax,%eax
  400dc6:	0f 89 c0 00 00 00    	jns    400e8c <add_client+0x10b>
	    /* Add connected descriptor to the pool */
	    p->clientfd[i] = connfd;                 //line:conc:echoservers:beginaddclient
  400dcc:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400dd0:	8b 55 fc             	mov    -0x4(%rbp),%edx
  400dd3:	48 63 d2             	movslq %edx,%rdx
  400dd6:	48 8d 4a 44          	lea    0x44(%rdx),%rcx
  400dda:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400ddd:	89 14 88             	mov    %edx,(%rax,%rcx,4)
	    Rio_readinitb(&p->clientrio[i], connfd); //line:conc:echoservers:endaddclient
  400de0:	8b 45 fc             	mov    -0x4(%rbp),%eax
  400de3:	48 98                	cltq   
  400de5:	48 c1 e0 04          	shl    $0x4,%rax
  400de9:	48 89 c2             	mov    %rax,%rdx
  400dec:	48 c1 e2 09          	shl    $0x9,%rdx
  400df0:	48 01 d0             	add    %rdx,%rax
  400df3:	48 8d 90 10 11 00 00 	lea    0x1110(%rax),%rdx
  400dfa:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400dfe:	48 01 c2             	add    %rax,%rdx
  400e01:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400e04:	89 c6                	mov    %eax,%esi
  400e06:	48 89 d7             	mov    %rdx,%rdi
  400e09:	e8 b2 fa ff ff       	callq  4008c0 <Rio_readinitb@plt>

	    /* Add the descriptor to descriptor set */
	    FD_SET(connfd, &p->read_set); //line:conc:echoservers:addconnfd
  400e0e:	8b 45 ec             	mov    -0x14(%rbp),%eax
  400e11:	8d 50 3f             	lea    0x3f(%rax),%edx
  400e14:	85 c0                	test   %eax,%eax
  400e16:	0f 48 c2             	cmovs  %edx,%eax
  400e19:	c1 f8 06             	sar    $0x6,%eax
  400e1c:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  400e20:	48 63 c8             	movslq %eax,%rcx
  400e23:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
  400e28:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400e2b:	89 d1                	mov    %edx,%ecx
  400e2d:	c1 f9 1f             	sar    $0x1f,%ecx
  400e30:	c1 e9 1a             	shr    $0x1a,%ecx
  400e33:	01 ca                	add    %ecx,%edx
  400e35:	83 e2 3f             	and    $0x3f,%edx
  400e38:	29 ca                	sub    %ecx,%edx
  400e3a:	bf 01 00 00 00       	mov    $0x1,%edi
  400e3f:	89 d1                	mov    %edx,%ecx
  400e41:	48 d3 e7             	shl    %cl,%rdi
  400e44:	48 89 fa             	mov    %rdi,%rdx
  400e47:	48 09 d6             	or     %rdx,%rsi
  400e4a:	48 89 f1             	mov    %rsi,%rcx
  400e4d:	48 8b 55 e0          	mov    -0x20(%rbp),%rdx
  400e51:	48 98                	cltq   
  400e53:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)

	    /* Update max descriptor and pool highwater mark */
	    if (connfd > p->maxfd) //line:conc:echoservers:beginmaxfd
  400e58:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400e5c:	8b 00                	mov    (%rax),%eax
  400e5e:	3b 45 ec             	cmp    -0x14(%rbp),%eax
  400e61:	7d 09                	jge    400e6c <add_client+0xeb>
		p->maxfd = connfd; //line:conc:echoservers:endmaxfd
  400e63:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400e67:	8b 55 ec             	mov    -0x14(%rbp),%edx
  400e6a:	89 10                	mov    %edx,(%rax)
	    if (i > p->maxi)       //line:conc:echoservers:beginmaxi
  400e6c:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400e70:	8b 80 0c 01 00 00    	mov    0x10c(%rax),%eax
  400e76:	3b 45 fc             	cmp    -0x4(%rbp),%eax
  400e79:	7d 0f                	jge    400e8a <add_client+0x109>
		p->maxi = i;       //line:conc:echoservers:endmaxi
  400e7b:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  400e7f:	8b 55 fc             	mov    -0x4(%rbp),%edx
  400e82:	89 90 0c 01 00 00    	mov    %edx,0x10c(%rax)
	    break;
  400e88:	eb 13                	jmp    400e9d <add_client+0x11c>
  400e8a:	eb 11                	jmp    400e9d <add_client+0x11c>
/* $begin add_client */
void add_client(int connfd, pool *p)
{
    int i;
    p->nready--;
    for (i = 0; i < FD_SETSIZE; i++)  /* Find an available slot */
  400e8c:	83 45 fc 01          	addl   $0x1,-0x4(%rbp)
  400e90:	81 7d fc ff 03 00 00 	cmpl   $0x3ff,-0x4(%rbp)
  400e97:	0f 8e 16 ff ff ff    	jle    400db3 <add_client+0x32>
		p->maxfd = connfd; //line:conc:echoservers:endmaxfd
	    if (i > p->maxi)       //line:conc:echoservers:beginmaxi
		p->maxi = i;       //line:conc:echoservers:endmaxi
	    break;
	}
    if (i == FD_SETSIZE) /* Couldn't find an empty slot */
  400e9d:	81 7d fc 00 04 00 00 	cmpl   $0x400,-0x4(%rbp)
  400ea4:	75 0a                	jne    400eb0 <add_client+0x12f>
	app_error("add_client error: Too many clients");
  400ea6:	bf b0 11 40 00       	mov    $0x4011b0,%edi
  400eab:	e8 c0 fa ff ff       	callq  400970 <app_error@plt>
}
  400eb0:	c9                   	leaveq 
  400eb1:	c3                   	retq   

0000000000400eb2 <check_clients>:
/* $end add_client */

/* $begin check_clients */
void check_clients(pool *p)
{
  400eb2:	55                   	push   %rbp
  400eb3:	48 89 e5             	mov    %rsp,%rbp
  400eb6:	48 81 ec 40 40 00 00 	sub    $0x4040,%rsp
  400ebd:	48 89 bd c8 bf ff ff 	mov    %rdi,-0x4038(%rbp)
  400ec4:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
  400ecb:	00 00 
  400ecd:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
  400ed1:	31 c0                	xor    %eax,%eax
    int i, connfd, n;
    char buf[MAXLINE];
    rio_t rio;

    for (i = 0; (i <= p->maxi) && (p->nready > 0); i++) {
  400ed3:	c7 85 d4 bf ff ff 00 	movl   $0x0,-0x402c(%rbp)
  400eda:	00 00 00 
  400edd:	e9 e4 01 00 00       	jmpq   4010c6 <check_clients+0x214>
	connfd = p->clientfd[i];
  400ee2:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  400ee9:	8b 95 d4 bf ff ff    	mov    -0x402c(%rbp),%edx
  400eef:	48 63 d2             	movslq %edx,%rdx
  400ef2:	48 83 c2 44          	add    $0x44,%rdx
  400ef6:	8b 04 90             	mov    (%rax,%rdx,4),%eax
  400ef9:	89 85 d8 bf ff ff    	mov    %eax,-0x4028(%rbp)
	rio = p->clientrio[i];
  400eff:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
  400f06:	8b 85 d4 bf ff ff    	mov    -0x402c(%rbp),%eax
  400f0c:	48 98                	cltq   
  400f0e:	48 c1 e0 04          	shl    $0x4,%rax
  400f12:	48 89 c1             	mov    %rax,%rcx
  400f15:	48 c1 e1 09          	shl    $0x9,%rcx
  400f19:	48 01 c8             	add    %rcx,%rax
  400f1c:	48 01 d0             	add    %rdx,%rax
  400f1f:	48 8d 90 10 11 00 00 	lea    0x1110(%rax),%rdx
  400f26:	48 8d 85 e0 df ff ff 	lea    -0x2020(%rbp),%rax
  400f2d:	48 89 d1             	mov    %rdx,%rcx
  400f30:	ba 10 20 00 00       	mov    $0x2010,%edx
  400f35:	48 89 ce             	mov    %rcx,%rsi
  400f38:	48 89 c7             	mov    %rax,%rdi
  400f3b:	e8 10 fa ff ff       	callq  400950 <memcpy@plt>

	/* If the descriptor is ready, echo a text line from it */
	if ((connfd > 0) && (FD_ISSET(connfd, &p->ready_set))) {
  400f40:	83 bd d8 bf ff ff 00 	cmpl   $0x0,-0x4028(%rbp)
  400f47:	0f 8e 72 01 00 00    	jle    4010bf <check_clients+0x20d>
  400f4d:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
  400f53:	8d 50 3f             	lea    0x3f(%rax),%edx
  400f56:	85 c0                	test   %eax,%eax
  400f58:	0f 48 c2             	cmovs  %edx,%eax
  400f5b:	c1 f8 06             	sar    $0x6,%eax
  400f5e:	89 c2                	mov    %eax,%edx
  400f60:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  400f67:	48 63 d2             	movslq %edx,%rdx
  400f6a:	48 83 c2 10          	add    $0x10,%rdx
  400f6e:	48 8b 74 d0 08       	mov    0x8(%rax,%rdx,8),%rsi
  400f73:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
  400f79:	99                   	cltd   
  400f7a:	c1 ea 1a             	shr    $0x1a,%edx
  400f7d:	01 d0                	add    %edx,%eax
  400f7f:	83 e0 3f             	and    $0x3f,%eax
  400f82:	29 d0                	sub    %edx,%eax
  400f84:	89 c1                	mov    %eax,%ecx
  400f86:	48 d3 fe             	sar    %cl,%rsi
  400f89:	48 89 f0             	mov    %rsi,%rax
  400f8c:	83 e0 01             	and    $0x1,%eax
  400f8f:	48 85 c0             	test   %rax,%rax
  400f92:	0f 84 27 01 00 00    	je     4010bf <check_clients+0x20d>
	    p->nready--;
  400f98:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  400f9f:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
  400fa5:	8d 50 ff             	lea    -0x1(%rax),%edx
  400fa8:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  400faf:	89 90 08 01 00 00    	mov    %edx,0x108(%rax)
	    if ((n = Rio_readlineb(&rio, buf, MAXLINE)) != 0) {
  400fb5:	48 8d 8d e0 bf ff ff 	lea    -0x4020(%rbp),%rcx
  400fbc:	48 8d 85 e0 df ff ff 	lea    -0x2020(%rbp),%rax
  400fc3:	ba 00 20 00 00       	mov    $0x2000,%edx
  400fc8:	48 89 ce             	mov    %rcx,%rsi
  400fcb:	48 89 c7             	mov    %rax,%rdi
  400fce:	e8 2d f9 ff ff       	callq  400900 <Rio_readlineb@plt>
  400fd3:	89 85 dc bf ff ff    	mov    %eax,-0x4024(%rbp)
  400fd9:	83 bd dc bf ff ff 00 	cmpl   $0x0,-0x4024(%rbp)
  400fe0:	74 5c                	je     40103e <check_clients+0x18c>
		byte_cnt += n; //line:conc:echoservers:beginecho
  400fe2:	8b 15 d8 10 20 00    	mov    0x2010d8(%rip),%edx        # 6020c0 <byte_cnt>
  400fe8:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
  400fee:	01 d0                	add    %edx,%eax
  400ff0:	89 05 ca 10 20 00    	mov    %eax,0x2010ca(%rip)        # 6020c0 <byte_cnt>
		printf("Server received %d (%d total) bytes on fd %d\n",
  400ff6:	8b 15 c4 10 20 00    	mov    0x2010c4(%rip),%edx        # 6020c0 <byte_cnt>
  400ffc:	8b 8d d8 bf ff ff    	mov    -0x4028(%rbp),%ecx
  401002:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
  401008:	89 c6                	mov    %eax,%esi
  40100a:	bf d8 11 40 00       	mov    $0x4011d8,%edi
  40100f:	b8 00 00 00 00       	mov    $0x0,%eax
  401014:	e8 d7 f8 ff ff       	callq  4008f0 <printf@plt>
		       n, byte_cnt, connfd);
		Rio_writen(connfd, buf, n); //line:conc:echoservers:endecho
  401019:	8b 85 dc bf ff ff    	mov    -0x4024(%rbp),%eax
  40101f:	48 63 d0             	movslq %eax,%rdx
  401022:	48 8d 8d e0 bf ff ff 	lea    -0x4020(%rbp),%rcx
  401029:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
  40102f:	48 89 ce             	mov    %rcx,%rsi
  401032:	89 c7                	mov    %eax,%edi
  401034:	e8 27 f9 ff ff       	callq  400960 <Rio_writen@plt>
  401039:	e9 81 00 00 00       	jmpq   4010bf <check_clients+0x20d>
	    }

	    /* EOF detected, remove descriptor from pool */
	    else {
		Close(connfd); //line:conc:echoservers:closeconnfd
  40103e:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
  401044:	89 c7                	mov    %eax,%edi
  401046:	e8 45 f9 ff ff       	callq  400990 <Close@plt>
		FD_CLR(connfd, &p->read_set); //line:conc:echoservers:beginremove
  40104b:	8b 85 d8 bf ff ff    	mov    -0x4028(%rbp),%eax
  401051:	8d 50 3f             	lea    0x3f(%rax),%edx
  401054:	85 c0                	test   %eax,%eax
  401056:	0f 48 c2             	cmovs  %edx,%eax
  401059:	c1 f8 06             	sar    $0x6,%eax
  40105c:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
  401063:	48 63 c8             	movslq %eax,%rcx
  401066:	48 8b 74 ca 08       	mov    0x8(%rdx,%rcx,8),%rsi
  40106b:	8b 95 d8 bf ff ff    	mov    -0x4028(%rbp),%edx
  401071:	89 d1                	mov    %edx,%ecx
  401073:	c1 f9 1f             	sar    $0x1f,%ecx
  401076:	c1 e9 1a             	shr    $0x1a,%ecx
  401079:	01 ca                	add    %ecx,%edx
  40107b:	83 e2 3f             	and    $0x3f,%edx
  40107e:	29 ca                	sub    %ecx,%edx
  401080:	bf 01 00 00 00       	mov    $0x1,%edi
  401085:	89 d1                	mov    %edx,%ecx
  401087:	48 d3 e7             	shl    %cl,%rdi
  40108a:	48 89 fa             	mov    %rdi,%rdx
  40108d:	48 f7 d2             	not    %rdx
  401090:	48 21 d6             	and    %rdx,%rsi
  401093:	48 89 f1             	mov    %rsi,%rcx
  401096:	48 8b 95 c8 bf ff ff 	mov    -0x4038(%rbp),%rdx
  40109d:	48 98                	cltq   
  40109f:	48 89 4c c2 08       	mov    %rcx,0x8(%rdx,%rax,8)
		p->clientfd[i] = -1;          //line:conc:echoservers:endremove
  4010a4:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  4010ab:	8b 95 d4 bf ff ff    	mov    -0x402c(%rbp),%edx
  4010b1:	48 63 d2             	movslq %edx,%rdx
  4010b4:	48 83 c2 44          	add    $0x44,%rdx
  4010b8:	c7 04 90 ff ff ff ff 	movl   $0xffffffff,(%rax,%rdx,4)
{
    int i, connfd, n;
    char buf[MAXLINE];
    rio_t rio;

    for (i = 0; (i <= p->maxi) && (p->nready > 0); i++) {
  4010bf:	83 85 d4 bf ff ff 01 	addl   $0x1,-0x402c(%rbp)
  4010c6:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  4010cd:	8b 80 0c 01 00 00    	mov    0x10c(%rax),%eax
  4010d3:	3b 85 d4 bf ff ff    	cmp    -0x402c(%rbp),%eax
  4010d9:	7c 15                	jl     4010f0 <check_clients+0x23e>
  4010db:	48 8b 85 c8 bf ff ff 	mov    -0x4038(%rbp),%rax
  4010e2:	8b 80 08 01 00 00    	mov    0x108(%rax),%eax
  4010e8:	85 c0                	test   %eax,%eax
  4010ea:	0f 8f f2 fd ff ff    	jg     400ee2 <check_clients+0x30>
		FD_CLR(connfd, &p->read_set); //line:conc:echoservers:beginremove
		p->clientfd[i] = -1;          //line:conc:echoservers:endremove
	    }
	}
    }
}
  4010f0:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  4010f4:	64 48 33 04 25 28 00 	xor    %fs:0x28,%rax
  4010fb:	00 00 
  4010fd:	74 05                	je     401104 <check_clients+0x252>
  4010ff:	e8 dc f7 ff ff       	callq  4008e0 <__stack_chk_fail@plt>
  401104:	c9                   	leaveq 
  401105:	c3                   	retq   
  401106:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40110d:	00 00 00 

0000000000401110 <__libc_csu_init>:
  401110:	41 57                	push   %r15
  401112:	41 89 ff             	mov    %edi,%r15d
  401115:	41 56                	push   %r14
  401117:	49 89 f6             	mov    %rsi,%r14
  40111a:	41 55                	push   %r13
  40111c:	49 89 d5             	mov    %rdx,%r13
  40111f:	41 54                	push   %r12
  401121:	4c 8d 25 c8 0c 20 00 	lea    0x200cc8(%rip),%r12        # 601df0 <__frame_dummy_init_array_entry>
  401128:	55                   	push   %rbp
  401129:	48 8d 2d c8 0c 20 00 	lea    0x200cc8(%rip),%rbp        # 601df8 <__init_array_end>
  401130:	53                   	push   %rbx
  401131:	4c 29 e5             	sub    %r12,%rbp
  401134:	31 db                	xor    %ebx,%ebx
  401136:	48 c1 fd 03          	sar    $0x3,%rbp
  40113a:	48 83 ec 08          	sub    $0x8,%rsp
  40113e:	e8 4d f7 ff ff       	callq  400890 <_init>
  401143:	48 85 ed             	test   %rbp,%rbp
  401146:	74 1e                	je     401166 <__libc_csu_init+0x56>
  401148:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40114f:	00 
  401150:	4c 89 ea             	mov    %r13,%rdx
  401153:	4c 89 f6             	mov    %r14,%rsi
  401156:	44 89 ff             	mov    %r15d,%edi
  401159:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  40115d:	48 83 c3 01          	add    $0x1,%rbx
  401161:	48 39 eb             	cmp    %rbp,%rbx
  401164:	75 ea                	jne    401150 <__libc_csu_init+0x40>
  401166:	48 83 c4 08          	add    $0x8,%rsp
  40116a:	5b                   	pop    %rbx
  40116b:	5d                   	pop    %rbp
  40116c:	41 5c                	pop    %r12
  40116e:	41 5d                	pop    %r13
  401170:	41 5e                	pop    %r14
  401172:	41 5f                	pop    %r15
  401174:	c3                   	retq   
  401175:	66 66 2e 0f 1f 84 00 	data32 nopw %cs:0x0(%rax,%rax,1)
  40117c:	00 00 00 00 

0000000000401180 <__libc_csu_fini>:
  401180:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000401184 <_fini>:
  401184:	48 83 ec 08          	sub    $0x8,%rsp
  401188:	48 83 c4 08          	add    $0x8,%rsp
  40118c:	c3                   	retq   
