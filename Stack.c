#include<stdio.h>
#include<string.h>
char S[20];
int top=0;
void push(char S[],char opr);
void peep(char S[]);
int main()
{
    int LEN,i,Alev,Slev;
    char A[20];
    scanf("%s",A);
    LEN = strlen(A);
    S[top] = '(';
    A[LEN] = ')';
    for(i=0;i<=LEN;i++)
    {
        if(A[i] == '+' || A[i] == '%' || A[i] == '-' || A[i] == '*' || A[i] == '/')
        {
        if(A[i] == '+' || A[i] == '-')
        {
            Alev = 1;
        }
        else{Alev = 2;}
        while(S[top]!='(')
        {
        if(S[top] == '+' || S[top] == '-')
        {
            Slev = 1;
        }
        else if(S[top] == '('){Slev = 3;}
        else{Slev = 2;}
        if(Slev<Alev)
        {
        break;
        }
        else{peep(S);}
        }
        push(S,A[i]);
        }
        else if(A[i] == '(' || A[i] == ')')
        {
            if(A[i] == '(')
            {
                push(S,A[i]);
            }
            else
            {
             do
             {
                 peep(S);
             }while(S[top]!='(');
             top--;
            }
        }
        else
        {
            printf("%c",A[i]);
        }
    }

}
void push(char S[],char opr)
{
    top++;
    S[top]=opr;
}
void peep(char S[])
{
    printf("%c",S[top]);
    top--;
}
