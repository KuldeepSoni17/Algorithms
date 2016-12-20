#include<stdio.h>

#include<stdlib.h>

main()
{
    long int SKey,LKey,Temp;
    int a,b,N,Time = 0;
    scanf("%d %d",&SKey,&LKey);
    scanf("%d",&N);
    long int VoNK[N]; // VoNK = Values of N Key.
    for(a=0;a<N;a++)
    {
        scanf("%d",&VoNK[a]);
    }
    for(a=0;a<N;a++)
    {
        for(b=a+1;b<N;b++)
        {
            if(VoNK[a] < VoNK[b])
            {
                Temp = VoNK[a];
                VoNK[a] = VoNK[b];
                VoNK[b] = Temp;
            }
        }
    }

    Temp = LKey/SKey;
    if(LKey/SKey != 1)
    {
      if(LKey%SKey == 0)
      {
          a = 0;
        while(Temp != 1 && a <= N)
        {
            if(Temp%VoNK[a] == 0)
            {
             Time++;
             Temp = Temp/VoNK[a];
            }
            a++;
        }
        if(Temp == 1)
        {
        printf("%d",Time);
        }
        else
        {
            printf("-1");
        }
      }
      else
      {
          printf("-1");
      }
    }
    else
    {
        printf("0");
    }

}

