/*************************************************************************
    > File Name: 3.14.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月26日 星期二 09时25分41秒
 ************************************************************************/

#include<stdio.h>
#define TESTA >=
#define TESTB ==
#define TESTC >
#define TESTD <=
typedef long data_tAl;
typedef short data_tB;
typedef unsigned char data_tC;
typedef int data_tD;

char com_Al(data_tAl a) {
	return a TESTA 0;
}

char com_Aul(data_tAul a) {
	return a TESTA 0;
}

char com_Ap(data_tAp a) {
	return a TESTA 0;
}

char com_B(data_tB a) {
	return a TESTB 0;
}

char com_C(data_tC a) {
	return a TESTC 0;
}

char com_D(data_tD a) {
	return a TESTD 0;
}
