#include<stdio.h>
#include<stdlib.h>
#include"quadraticroots.h"

int main() {
    
    struct QuadraticRootsResult result_int = findroots(1, -3, 2);
    if (result_int.norealroots == 1) 
    {
        printf("No real roots for int arguments\n");
    } else 
    {
        printf("Roots for int arguments: %d, %d\n", (int)result_int.x1, (int)result_int.x2);
    }

    struct QuadraticRootsResult result_float = findroots(1.0, -3.0, 2.0);
    if (result_float.norealroots == 1)
     {
        printf("No real roots for float arguments\n");
    } else 
    {
        printf("Roots for float arguments: %.2f, %.2f\n", result_float.x1, result_float.x2);
    }

    struct QuadraticRootsResult result_double = findroots(1.0, -3.0, 2.0);
    if (result_double.norealroots == 1) 
    {
        printf("No real roots for double arguments\n");
    } else 
    {
        printf("Roots for double arguments: %lf, %lf\n", result_double.x1, result_double.x2);
    }

    return 0;
}
