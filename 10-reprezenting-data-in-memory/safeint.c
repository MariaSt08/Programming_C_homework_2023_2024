#include<stdio.h>
#include<limits.h>
#include"safeint.h"

struct SafeResult safeadd(int a, int b)
 {
    struct SafeResult result;
    long long sum = (long long)a + b;

    if (sum > INT_MAX || sum < INT_MIN)
     {
        result.value = 0;
        result.errorflag = 1;
    }
     else 
    {
        result.value = (int)sum;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safesubtract(int a, int b) 
{
    struct SafeResult result;
    long long sub = (long long)a - b;

    if (sub > INT_MAX || sub < INT_MIN) 
    {
        result.value = 0;
        result.errorflag = 1;
    } 
    else 
    {
        result.value = (int)sub;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safemultiply(int a, int b) 
{
    struct SafeResult result;
    long long mult = (long long)a * b;

    if (mult > INT_MAX || mult < INT_MIN) {
        result.value = 0;
        result.errorflag = 1;
    } else {
        result.value = (int)mult;
        result.errorflag = 0;
    }
    return result;
}
struct SafeResult safedivide(int a, int b) 
{
    struct SafeResult result;

    if (b == 0)
     {
        result.value = 0;
        result.errorflag = 1;
    }
     else 
     {
        long long del = (long long)a / b;

        if (del > INT_MAX || del < INT_MIN) 
        {
            result.value = 0;
            result.errorflag = 1;
        } else {
            result.value = (int)del;
            result.errorflag = 0;
        }
    }
    return result;
}
struct SafeResult safestrtoint(char str[]) 
{
    struct SafeResult result;
    long long number = 0;
    int is_negative = 0;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' && i == 0)) 
        {
            if (str[i] == '-' && i == 0) 
            {
                is_negative = 1;
            } else 
            {
                number = (number * 10) + (str[i] - '0');
            }
        } else 
        {
            result.value = 0;
            result.errorflag = 1;
            return result;
        }
    }

    if (is_negative) 
    {
        number *= -1;
    }

    result = safemultiply((int)number, 1);
    return result;
}
