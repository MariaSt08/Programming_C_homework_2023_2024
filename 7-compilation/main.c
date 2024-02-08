#include<stdio.h>
#include"transformation.h"

int main(void)
{
     char input1[] = {"-123"};
     char input2[] = {"12ab23"};
    
    struct transformation result1 = Transformationtostringtoint(input1);
    struct transformation result2 = Transformationtostringtoint(input2);

    printf("Input: %s => Output: result = %ld, error = \"%s\"\n", input1, result1.result, result1.error);
    printf("Input: %s => Output: result = %ld, error = \"%s\"\n", input2, result2.result, result2.error);

    return 0;
}
