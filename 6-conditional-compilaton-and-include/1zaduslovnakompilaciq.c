#include <stdio.h>
#define DEBUG
#define SIZE 6
#define ELEMENTS {69, 43, 11, 100, 0, 666}

void sortirane_vuzh(int array[], int arrlen)
{
    for (int i = 0; i < arrlen - 1; i++)
    {
        int sorted = 0;
        for (int j = 0; j < arrlen - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                sorted = 1;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        if (!sorted)
            break;
    }
} 
    int sum_na_el_index(int array[],int arrlen)
{
    int sum = 0;

    for (int i = 0; i < arrlen; i++)
    {
        if (i % 3 == 0)
        
            sum=sum+ array[i]; 
            
}
    return sum;
}

int main(void)
{
    int array[SIZE] = ELEMENTS;
    
    sortirane_vuzh(array, SIZE);
   int sum = sum_na_el_index(array, SIZE);
#ifdef DEBUG
    printf("Sortiran masiv: ");
    for (int i = 0; i < SIZE; i++)
     {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Elementite na indexi,delqshti se na 3: ");
    for (int i = 0; i < SIZE; i++) 
    {
        if (i % 3 == 0) 
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
#endif

    printf("Sum: %d\n", sum);


}
