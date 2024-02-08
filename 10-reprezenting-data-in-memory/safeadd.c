#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char **argv) 
{
    if (safestrtoint(argv[1]).errorflag || safestrtoint(argv[2]).errorflag) 
    {
        print_invalid_input_message();
    } 

    struct SafeResult result = safeadd(safestrtoint(argv[1]).value, safestrtoint(argv[2]).value);

    if (result.errorflag) 
    {
        print_error_message();
    } 
    else 
    {
        printf("Sum: %d \n", result.value);
    }
   
    return 0;
}
