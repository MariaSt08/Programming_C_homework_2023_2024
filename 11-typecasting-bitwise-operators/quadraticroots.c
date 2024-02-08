#include<stdio.h>
#include<stdlib.h>
#include "quadraticroots.h"
#include"math.h"
struct QuadraticRootsResult findroots(double a, double b, double c) 
{
    struct QuadraticRootsResult result;

    double D = b * b - 4 * a * c;

    if (D >= 0)
     {
        result.x1 = (-b + sqrtl(D)) / (2 * a);
        result.x2 = (-b - sqrtl(D)) / (2 * a);
        result.norealroots = 0;
    } else 
    {
        result.norealroots = 1;
        
    }

    return result;
}
