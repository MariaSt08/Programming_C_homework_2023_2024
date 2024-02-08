#include<stdio.h>
#include"mystrings.h"

void main(int argc, char ** argv)
{
    if(argc!= 2)
    printf("Error: invalid arguments passed to strlenght function!");
    else 
    printf("%d", strlength(argv[1]));
}