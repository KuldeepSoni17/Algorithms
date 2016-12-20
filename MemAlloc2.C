#include<stdio.h>
#include<stdlib.h>
#define NULL 0

main()

{
    char *str1;

    if((str1 = (char*)malloc(10))== NULL)
    {
        printf("Malloc failed");
    }
gets(str1);
puts(str1);
}

