#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc)
    {
    	int N,x,y,i,j;
    	cin >> N;
   		int len[N];
    	for(i=0;i<N;i++)
    	{
    		cin >> len[i];
    	}
    	i=0;
    	j=N-1;
    	x = len[i];
    	y = len[j];
    	while(true)
        {
            if(x < 2*y)
            {
                i++;
                if(i == j)
                {
                    i--;
                    break;
                }
                else
                {
                    x = x + len[i];
                }
            }
            else if(x == 2*y)
            {
                i++;
                j--;
                if(i==j)
                {
                    i++;
                    break;
                }
                else
                {
                    x += len[i];
                    y += len[j];
                }
            }
            else
            {
                j--;;
                if(i == j)
                {
                    j++;
                    break;
                }
                else
                {
                    y = y + len[j];
                }
            }
        }
        cout << i+1 << " " << N-i-1 << endl;
    	tc--;
    }
    return 0;
}

