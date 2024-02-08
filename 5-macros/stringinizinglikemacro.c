#include<stdio.h>
#define DEBUG(X) printf("The value of "#X" is %d",X)
int main(void)
{
    int promenliva=7;
    DEBUG(promenliva);
    printf(" \n File: %s",__FILE__);
    printf("\n Line: %d",__LINE__);
}
