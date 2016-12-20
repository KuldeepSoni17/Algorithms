#include<stdio.h>
int func(int *);
int main()
{
    int N[4][4],i,j,*ptr;
    ptr = &N[0];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
    printf("%ld %d %d\t",&N[i][j],i,j);
        }
        printf("\n");
    }
    func(ptr);
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
    printf("%ld %ld %d %d\t",&N[i][j],N[i][j],i,j);
        }
        printf("\n");
    }
}
int func(int *ptr)
{   int i;
    for(i=0;i<16;i++)
    {
        *ptr = i;
        ptr++;
    }
    return ptr;
}
