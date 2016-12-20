#include<stdio.h>

int main()
{
    int N,i,BC=0,j,temp,k,a,z;
    scanf("%d",&N);
    int stud[N];
    for(i=1;i<=N;i++)
    {
        stud[i-1] = N-i+1;
        //printf("%d",stud[i-1]);
    }
    char x,SONG[1000];
    i=0;
    x=getchar();
    x=getchar();

    do
    {
        x = getchar();
        if(x == 'b')
        {
            BC++;
        }
        SONG[i] = x;
        i++;
    }while(x!='\n');
    SONG[i-1] = '\0';
    j=N-1;
    while(stud[1] != 0)
    {
        i=0;
     while(SONG[i] != '\0')
    {
     if(SONG[i] == 'b')
     {
        stud[j] = 0;
     }
     j--;
     if(j < 0)
     {
         j = N-1;
     }

     i++;


            for(k=0;k<N;k++)
            {
                for(z=k+1;z<N;z++)
                {
                    if(stud[z]>stud[k])
                    {
                        temp = stud[k];
                        stud[k] = stud[z];
                        stud[z] = temp;
                    }
                }
            }

    if(stud[1] == 0)
    {
        printf("%d",stud[0]);
        break;
    }
}

            N = N-BC;
            }

}

