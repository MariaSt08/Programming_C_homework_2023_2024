#include<stdio.h>
#define TROICHEN_OPERATOR(a,b) (a)>(b) ? (a):(b)
int main(void)
{
printf("The greatest number:%d \n",TROICHEN_OPERATOR(5,3));

}