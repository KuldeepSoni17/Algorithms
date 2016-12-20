#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,a,b,flag = 0,C[26] = {0},j;
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

    for(i=0;i<b-1;i++)
    {
        if(s[i] == 'a' || 'A')
        {
            C[0] = 1;
        }


       else if(s[i] == 'b' || 'B')
        {
            C[1] = 1;
        }

       else if(s[i] == 'c' || 'C')
        {
            C[2] = 1;
        }

       else if(s[i] == 'd' || 'D')
        {
            C[3] = 1;
        }

       else if(s[i] == 'e' || 'E')
        {
            C[4] = 1;
        }

       else if(s[i] == 'f' || 'F')
        {
            C[5] = 1;
        }

       else if(s[i] == 'g' || 'G')
        {
            C[6] = 1;
        }

       else if(s[i] == 'h' || 'H')
        {
            C[7] = 1;
        }

       else if(s[i] == 'i' || 'I')
        {
            C[8] = 1;
        }

       else if(s[i] == 'j' || 'J')
        {
            C[9] = 1;
        }

       else if(s[i] == 'k' || 'K')
        {
            C[10] = 1;
        }

       else if(s[i] == 'l' || 'L')
        {
            C[11] = 1;
        }

       else if(s[i] == 'm' || 'M')
        {
            C[12] = 1;
        }

       else if(s[i] == 'n' || 'N')
        {
            C[13] = 1;
        }

       else if(s[i] == 'o' || 'O')
        {
            C[14] = 1;
        }

       else if(s[i] == 'p' || 'P')
        {
            C[15] = 1;
        }

       else if(s[i] == 'q' || 'Q')
        {
            C[16] = 1;
        }

       else if(s[i] == 'r' || 'R')
        {
            C[17] = 1;
        }

       else if(s[i] == 's' || 'S')
        {
            C[18] = 1;
        }

       else if(s[i] == 't' || 'T')
        {
            C[19] = 1;
        }

       else if(s[i] == 'u' || 'U')
        {
            C[20] = 1;
        }

       else if(s[i] == 'v' || 'V')
        {
            C[21] = 1;
        }

       else if(s[i] == 'w' || 'W')
        {
            C[22] = 1;
        }

       else if(s[i] == 'x' || 'X')
        {
            C[23] = 1;
        }

       else if(s[i] == 'y' || 'Y')
        {
            C[24] = 1;
        }

       else if(s[i] == 'z' || 'Z')
        {
            C[25] = 1;
        }
        else
            {
            printf("ahg");
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
