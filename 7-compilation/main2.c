#include<stdio.h>
#include"maths.h"
int main(void)
{
    int n;
do
    {
        printf("\n Enter number: ");
        scanf("%d", &n);
    }
 while(n<0);
    printf("\n Faktoriela na chisloto e: %d", fact(n));

    return 0;
}
