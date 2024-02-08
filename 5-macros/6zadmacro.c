#include <stdio.h>
#include <stdlib.h>

#define SIZE 6
#define ELEMENTS {69, 43, 11, 100, 0, 666}

#define SWAP(A, B, TYPE) do { \
    TYPE C = A; \
    A = B; \
    B = C; \
} while(0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) do { \
    for (int i = 0; i < SIZE - 1; i++) { \
        for (int j = 0; j < SIZE - i - 1; j++) { \
            if (COMPARE(ARRAY[j], ARRAY[j + 1])) { \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            } \
        } \
    } \
} while(0)

#define VUZHODQSHT_RED(A, B) (A > B)
#define NIZHODQSHT_RED(A, B) (A < B)

int main(void)
{
    int array[SIZE] = ELEMENTS;

    SORT(array, SIZE, int, VUZHODQSHT_RED);
    printf("\n Sortiran vuzhodqshto:");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n %d", array[i]);
    }
    printf("\n");

    SORT(array, SIZE, int, NIZHODQSHT_RED);
     printf("\n Sortiran nizhodqshto:");
    for (int i = 0; i < SIZE; i++)
    {
        printf("\n %d", array[i]);
    }
}
