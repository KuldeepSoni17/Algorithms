#include<stdio.h>
#include<string.h>

int main()
{
int tc,j;
char STR[1500],x;
scanf("%d",&tc);
x = getchar();

for(j=0;j<tc;j++)
{
    int L,a,s,b;

    scanf("%d %s",&s,STR);
    L =  strlen(STR);
    for(a=0;a<L;a++)
    {

        STR[a] = STR[a] + (97 - STR[a])*2 + 25;


        if(s<0)
        {
            for(b=s*2;b<0;b++)
            {
                if(STR[a]>97)
                    {
        STR[a] = STR[a] - 1;
                }
                else
                {
                    STR[a] = 122;
                }
            }

        }
        else if(s>0)
        {
            for(b=0;b<s*2;b++)
            {
                if(STR[a]<122){
        STR[a] = STR[a] + 1;
                }
                else
                {
                    STR[a] = 97;
                }
            }
        }

    }
puts(STR);
}



}
