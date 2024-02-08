#include<stdio.h>
#include<stdlib.h>
#include"util.h"
#include "safeint.h"


void print_error_message() 
{
    printf("Error: Operation resulted in overflow or underflow.\n");
}
void print_invalid_input_message() 
{
    printf("Error: Invalid input. Arguments exceed the permissible values for int.\n");
}