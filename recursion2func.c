#include<stdio.h>
void Hello(int I);
int main()
{
    Hello(4);
}
void Hello(int I)
{
    int A,B;
    A = I - 1;
    B = 5;
    printf("%d %d\n",A,B);
    if(A>1)
    {
    Hello(A);

    }
    printf("%d",A);
    printf("Kuldeep\n");
}
