#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,a,b,flag = 0,C[26],j;
    char *STR,x;
    a = STR;
   do
        {
        x = getchar();
        *STR = x;
        STR++;
    }while(x != '\n');
    *(STR-1) = '\0';

    b = STR - a;
    STR = a;
    char s[b];

    for(i = 0;i<b;i++,STR++)
    {
         s[i] = *STR;
    }
    printf("%d",b);
    for(i=0;i<b-1;i++)
    {
        printf("%c",s[i]);
    }

    for(i=0;i<b-1;i++)
    {
        if(s[i] == 'a' || s[i] == 'A')
        {
            C[0] = 1;

        }


       else if(s[i] == 'b' || s[i] == 'B')
        {
            C[1] = 1;
        }

       else if(s[i] == 'c' || s[i] == 'C')
        {
            C[2] = 1;
        }

       else if(s[i] == 'd' || s[i] == 'D')
        {
            C[3] = 1;
        }

       else if(s[i] == 'e' ||  s[i] == 'E')
        {
            C[4] = 1;
        }

       else if(s[i] == 'f' ||  s[i] == 'F')
        {
            C[5] = 1;
        }

       else if(s[i] == 'g' ||  s[i] == 'G')
        {
            C[6] = 1;
        }

       else if(s[i] == 'h' ||  s[i] == 'H')
        {
            C[7] = 1;
        }

       else if(s[i] == 'i' ||  s[i] == 'I')
        {
            C[8] = 1;
        }

       else if(s[i] == 'j' ||  s[i] == 'J')
        {
            C[9] = 1;
        }

       else if(s[i] == 'k' ||  s[i] == 'K')
        {
            C[10] = 1;
        }

       else if(s[i] == 'l' ||  s[i] == 'L')
        {
            C[11] = 1;
        }

       else if(s[i] == 'm' ||  s[i] == 'M')
        {
            C[12] = 1;
        }

       else if(s[i] == 'n' ||  s[i] == 'N')
        {
            C[13] = 1;
        }

       else if(s[i] == 'o' ||  s[i] == 'O')
        {
            C[14] = 1;
        }

       else if(s[i] == 'p' ||  s[i] == 'P')
        {
            C[15] = 1;
        }

       else if(s[i] == 'q' ||  s[i] == 'Q')
        {
            C[16] = 1;
        }

       else if(s[i] == 'r' ||  s[i] == 'R')
        {
            C[17] = 1;
        }

       else if(s[i] == 's' ||  s[i] == 'S')
        {
            C[18] = 1;
        }

       else if(s[i] == 't' ||  s[i] == 'T')
        {
            C[19] = 1;
        }

       else if(s[i] == 'u' ||  s[i] == 'U')
        {
            C[20] = 1;
        }

       else if(s[i] == 'v' ||  s[i] == 'V')
        {
            C[21] = 1;
        }

       else if(s[i] == 'w' ||  s[i] == 'W')
        {
            C[22] = 1;
        }

       else if(s[i] == 'x' ||  s[i] == 'X')
        {
            C[23] = 1;
        }

       else if(s[i] == 'y' ||  s[i] == 'Y')
        {
            C[24] = 1;
        }

       else if(s[i] == 'z' ||  s[i] == 'Z')
        {
            C[25] = 1;
        }

    }

for(i=0;i<26;i++)
    {
        if(C[i] != 1)
        {
            flag == 1;
        }
    }
  if(flag == 1)
    {
        printf("not pangram");
    }
    else
    {
     printf("pangram");
    }
    for(i=0;i<26;i++)
    {
        printf("%d\n",C[i]);
    }
    for(i=0;i<26;i++)
    {
        if(C[i] != 1)
        {
            flag == 1;
        }
    }
     if(flag == 1)
    {
        printf("not pangram");
    }
    else
    {
     printf("pangram");
    }



    return 0;

}
