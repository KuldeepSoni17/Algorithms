#include<stdio.h>
int main()
{
int tc,j,M;
char x;
scanf("%d",&tc);
x = getchar();
for(j=0;j<tc;j++)
{
    int k,p=0,q=0,flag=1;
    do{
        x = getchar();
        if(flag == 1)
        {
            if( x != '\n')
            {
            p = x;
            }
            flag = 2;
        }
        else
        {
            if(x != '\n')
            {
            q = x;
            }
            flag = 1;
        }


    }while(x != '\n');
if(q != 0)
{
    if(flag == 1)
    {
M = (q-48)*10 + (p-48);
printf("%d\n",M%4);
}
   else
    {
M = (p-48)*10 + (q-48);
printf("%d\n",M%4);
}
}
else
{
M = (p-48);
printf("%d\n",M%4);
}

}
return 0;
}
