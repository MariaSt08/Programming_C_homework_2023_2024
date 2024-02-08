#include<stdio.h>
#define SWAP(A, B, TYPE) do { \
    TYPE C= A; \
    A = B; \
    B = C; \
} while(0)
int main(void)
{
int a=5,b=7;
printf("\n Before the swap: a=%d b=%d",a,b);
SWAP(a,b,int);
printf("\n After the swap: a=%d b=%d",a,b);

}