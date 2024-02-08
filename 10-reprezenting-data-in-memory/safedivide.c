// safedivide.c
#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char **argv) 
{
  struct SafeResult result = safedivide(safestrtoint(argv[1]).value, safestrtoint(argv[2]).value);

    if (result.errorflag)
     {
        print_error_message();
    } else
     {
        printf("Del: %d\n", result.value);
    }

    return 0;
}
