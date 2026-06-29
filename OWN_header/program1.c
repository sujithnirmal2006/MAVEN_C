//.h file
//sujith.h
ifndef SUJITH_H
#define SUJITH_H

void hello();

#endif

//.c file
//iamsujit.c
#include<stdio.h>
#include"sujith.h"

void hello()
{
printf("hello suji!");
}

//main.c file
//main.c
#include <stdio.h>
#include "sujith.h"

int main()
{
    hello();

    printf("Program Finished\n");

    return 0;
}
//we need to initialise all this file to create our qwn header file
