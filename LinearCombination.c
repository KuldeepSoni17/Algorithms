
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int tc,j,c,d,i,la,lb,l,temp;
    long int a,b;
    scanf("%d",&tc);
    for(j=0;j<tc;j++)
    {
        scanf("%ld %ld",&a,&b);
        if(a%2==0 && b%2==0)
        {
            printf("NO\n");
        }
        else
            {
        c = sqrt(a);
        d = sqrt(b);
        int FA[c],FB[d];
        la =0;
        for(i=1;i<=c;i++)
        {
            if(a % i == 0 )
            {
                if( i == 1 || i == 2)
                {
                    FA[la] = a/i;
                    la++;
                }
                else{
                FA[la] = i;
                la++;
                FA[la] = a/i;
                la++;}
            }
        }
        for(l=0;l<la;l++)
            {
                for(i=l+1;i<la;i++)
                {
                    if(FA[i]<FA[l])
                    {
                        temp = FA[l];
                        FA[l] = FA[i];
                        FA[i] = temp;
                    }
                }
            }


lb=0;
        for(i=1;i<=d;i++)
        {
            if(b % i == 0 )
            {
                if(i == 1  || i == 2)
                {
                    FB[lb] = b/i;
                    lb++;
                }
                else{
                FB[lb] = i;
                lb++;
                FB[lb] = b/i;
                lb++;}
            }
        }
         for(l=0;l<lb;l++)
            {
                for(i=l+1;i<lb;i++)
                {
                    if(FB[i]<FB[l])
                    {
                        temp = FB[l];
                        FB[l] = FB[i];
                        FB[i] = temp;
                    }
                }
            }



if(FA[0] < FB[0])
{
 for(i=0;i<la;i++)
 {
     if(FB[0] == FA[i])
     {
         printf("NO\n");
         break;
     }
     else
     {
         printf("YES\n");
         break;
     }
 }
}
else
{
  for(i=0;i<lb;i++)
 {
     if(FA[0] == FB[i])
     {
         printf("NO\n");
         break;
     }
     else
     {
         printf("YES\n");
         break;
     }
 }
}
    }

    }



return 0;

}
