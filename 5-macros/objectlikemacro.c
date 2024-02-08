#include<stdio.h>
#define SIZE 5
#define ELEMENTS 1,2,3,4,5 
int main(void)
{
   int  array[SIZE]={ELEMENTS};
   for(int i=0;i<SIZE;i++)
   {
    printf("\n %d",array[i]);
   }
  
}