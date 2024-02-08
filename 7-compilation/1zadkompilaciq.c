#include<stdio.h>
#define POW2(A,B) ((A) + (B))*((A) + (B))
int main(void)
{
    int a=5,b=7;
    printf("Pow of a and b:%d\n", POW2(a,b));
}