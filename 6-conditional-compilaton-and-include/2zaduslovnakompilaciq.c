#include <stdio.h>
#define ARRAY_SIZE 6
int main(void) 
{
    #ifdef ARRAY_SIZE
    #if ARRAY_SIZE >= 1 && ARRAY_SIZE <= 10
        int arr[ARRAY_SIZE];
        for (int i = 0; i < ARRAY_SIZE; i++) 
        {
            int a = 1;
            for (int j = 0; j < i; j++) 
            {
                a = a * 2;
            }
            arr[i] = a;
        }
        for (int i = 0; i < ARRAY_SIZE; i++) 
        {
            printf("%d\n", arr[i]);
        }
    #else
        printf("The values of ARRAY_SIZE are not valid.\n");
    #endif
    #else
        printf("The macro ARRAY_SIZE is not defined.\n");
    #endif

    return 0;
}
