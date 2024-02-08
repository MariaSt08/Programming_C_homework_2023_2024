#include <stdio.h>
#include<string.h>
#include "transformation.h"

struct transformation Transformationtostringtoint(char input[])
{
    struct transformation tmp;
    tmp.result = 0;
    tmp.error[0] = '\0';

    int i = 0;
    int isNegative = 0;

    if (input[0] == '-')
     {
        isNegative = 1;
        i = 1;
    }

    while (input[i] != '\0') 
    {
        if (input[i] >= '0' && input[i] <= '9')
         {
            tmp.result = tmp.result * 10 + (input[i] - '0');
        } else 
        {
           
            tmp.result = 0;
            strcpy(tmp.error, "Invalid input string");
            return tmp;
        }
        i++;
    }

    if (isNegative) 
    {
        tmp.result = -tmp.result;
    }

    return tmp;
}