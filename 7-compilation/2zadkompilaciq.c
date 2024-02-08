#include<stdio.h>
int nameri_NOK(int a,int b)
{
    int max=(a>b)? a:b;
     do
     {
        max++;
     }
    while(max % a !=0 || max % b !=0);

    return max;
}
int main(void)
{
    int a=12,b=18;
    int NOK=nameri_NOK(a,b);
    printf("\n NOK:%d",NOK);
}