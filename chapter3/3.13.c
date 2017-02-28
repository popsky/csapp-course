/*************************************************************************
    > File Name: 3.13.c
    > Author: sukong
    > Mail: sukong@outlook.com 
    > Created Time: 2016年04月26日 星期二 08时58分45秒
 ************************************************************************/

#include<stdio.h>
#define COMP !=
typedef unsigned long data_tul;
typedef long data_tl;
typedef long* data_tp;

int com1(data_tul a, data_tul b) {
	return a COMP b;
}

int com2(data_tl a, data_tl b) {
	return a COMP b;
}

int com3(data_tp a, data_tp b) {
	return a COMP b;
}
