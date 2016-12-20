#include<stdio.h>

int main()

{
    int tc,j;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        long int A,B;
        scanf("%ld",&A);
        scanf("%ld",&B);
        if (A == B)
        {
            printf("SAME\n");

        }
        else{printf("NOT SAME\n");}

    }
}
