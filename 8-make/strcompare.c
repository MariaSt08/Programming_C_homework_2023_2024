#include<stdio.h>
#include"mystrings.h"

void main(int argc, char ** argv)
{
    if(argc!= 3)
    printf("Error: invalid arguments passed to strcompare function!");
    else
    printf("%d",strcompare(argv[1],argv[2]));
}