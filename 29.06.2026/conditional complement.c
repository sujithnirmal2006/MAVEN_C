/*
 * #if: Checks whether a condition is true
 * Syntax:
 * #if condition
 *     //code
 * #endif
 * */
#include <stdio.h>

#define NUM 10

int main()
{
    #if NUM > 5
        printf("%d is greater than 5\n",NUM);
    #else
        printf("Number is not initialized\n");
    #endif

    printf("Program Terminated\n");

    return 0;
}
