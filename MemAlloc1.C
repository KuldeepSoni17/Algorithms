#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int *x,*table;
    int n;

    printf("\nEnter size of table");
    scanf("%d",&n);

    if((table = (int*)malloc(n * sizeof(int))) == NULL)
    {
        printf("No space available");
    }
    printf("Enter values:-\n");
    for(x = table;x<table + n;x++)
    {
       scanf("%d",x);
    }
}
