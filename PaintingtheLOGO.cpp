#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
        long int X,Y,flag,Z;
        cin >> X;
        Y = sqrt(X);
        Y = Y - 2;
        if(Y==0)
        {
            cout << "0" << " " << "0" << endl;
        }
        else
            {
        if(Y%2!=0)
        {
            Y++;
        }

        flag = 1;
        while(flag==1)
        {
            if(((Y*(Y+2))*2)>X)
            {
                Y = Y-2;
                flag = 1;
            }
            else
            {
                if(((Y*(Y+2))*2+(Y+2)*2)>X)
                {
                    if( ( ( Y * (Y+2) ) + ( Y * (Y-2) ) + (Y-2)*2) <= X)
                    {
                        flag = 0;
                        Z = Y-1;
                    }
                    else
                    {
                        Y = Y-2;
                    }
                }
                else
                {
                    flag = 0;
                    Z = Y+1;
                }
            }

            if(flag==0)
            {
                cout << Z << " " <<  Y << endl;
                break;
            }
        }

            }

tc--;
    }
}
