#include <stdio.h>

int main(int argc,  char *args[ ])
{
    int numberofArgs = argc;
    char *argument1 = args[0];
    char *argument2 = args[1];
    
    printf("Number of arguments passed: %d\n", numberofArgs);
    printf("First argument is: %s\n", argument1);
    printf("Second arguments is: %s\n",  argument2);
    return 0;
    }