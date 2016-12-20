// practical set-6

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void SBT(float a,float b);
void DIV(float a,float b);
void MUL(float a,float b);
void ADD(float a,float b);

void ADD(float a, float b)
{
    printf("%f + %f = %f",a,b,a+b);
}
void SBT(float a, float b)
{
printf("%f - %f = %f",a,b,a-b);
}
void DIV(float a, float b)
{
printf("%f / %f = %f",a,b,a/b);
}

void MUL(float a, float b)
{
printf("%f * %f = %f",a,b,a*b);
}



int main()
{
float a,b;
char char1;
printf("Enter Two no.");
scanf("%f",&a);
scanf("%f",&b);
printf("Enter:-'A' for ADDITION\n'D' for DIVISION\n'S' for SUBSTRACTION\n'M' for MULTIPLICATION\n");
char1 = getchar();
printf("%c",char1);
switch(char1)
{
case 'a':
case 'A' :
    ADD(a,b);
    break;
case 'm':
case 'M' :

    MUL(a,b);
    break;
case 's':
case 'S' :
    SBT(a,b);
break;
case 'd':
case 'D' :
     DIV(a,b);
     break;
default:
    break;
    }
getch();
}



