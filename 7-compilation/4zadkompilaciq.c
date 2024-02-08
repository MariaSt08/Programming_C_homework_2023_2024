#include <stdio.h>
#include <math.h>

void pow_4stepen(long arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {

        arr[i] = pow(arr[i], 4);
    }
}

int main(void) 
{
    int n = 4;
    long arr[4] = {2, 4, 5, 3};

    pow_4stepen(arr, n);

    printf("Masiv sled povdigane na 4ta stepen:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%ld ", arr[i]);
    }

    return 0;
}
