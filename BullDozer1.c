#include<stdio.h>

int main()
{
    int tc,j;
    char x;
    scanf("%d",&tc);
    x = getchar();
    for(j=0;j<tc;j++)
    {
        int R,C,a,b,flag,sum,d = 0,e,z,f,q = 0,temp,h,ENG = 0;

        scanf("%d %d",&R,&C);
        sum = 0;
        flag = 0;
        z=C;
        x = getchar();
        int area[R][C],CHK[R*C];
        for(a=0;a<R;a++)
        {
            for(b=0;b<C;b++)
            {
                x = getchar();
                if(x == 'M' || x == 'm')

                {
                    area[a][b] = 1;
                }
                else{area[a][b] = 0;}

            }
            x = getchar();
        }
        d = 0;
        for(a=0;a<R;a++)
        {
            for(b=0;b<C;b++)
            {
                if(area[a][b] == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                ENG = 1;
                for(f=0;d<z;d++,f++)
                {

                    CHK[d] = a*C + f + 1;
                    q++;

                }
                z = z + C;
            }
                flag = 0;
        }
        for(a=0;a<C;a++)
        {
            for(b=0;b<R;b++)
            {
                if(area[b][a] == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                ENG = 1;

                for(f=0;d<z;d++,f++)
                {
                    CHK[d] = f*R + a + 1;
                    q++;
                }
                z = z + R;
            }
                flag = 0;
        }
 for(a=0;a<q;a++)
            {
                for(b=a+1;b<q;b++)
                {
                    if(CHK[b]<CHK[a])
                    {
                        temp = CHK[a];
                        CHK[a] = CHK[b];
                        CHK[b] = temp;
                    }
                }
            }


temp = CHK[0];
h = CHK[0];
sum = 0;

for(a=1;a<q;a++)
{
    if(temp != CHK[a])
    {
         temp = CHK[a];

        sum++;
    }
}
if(ENG == 1)
{
    if(CHK[q] != CHK[q-1])
    {sum++;}
}



printf("%d\n",sum);


    }
return 0;
}
