#include<iostream>
using namespace std;
long long int P=0;
void battles(long long int ARR[], long int,long int,long long int S,long long int sum);
void eats(long long int ARR[],long int i,long int N,long long int S,long long int sum)
    {
          if(i==N)
    {
        P = max(sum,P);
        cout << "P"<<P << endl << endl;
        return;
    }
        S++;
        eats(ARR,i+1,N,S,sum);
        cout << i << " " << sum << " " << S << endl;
        S--;
        battles(ARR,i+1,N,S,sum);
        cout << i << " " << sum << " " << S << endl;
    }
void battles(long long int ARR[],long int i,long int N,long long int S,long long int sum)
{
    if(i==N)
    {
        P = max(sum,P);
        cout << "P"<<P << endl << endl;
        return;
    }
    sum += S*ARR[i];
    eats(ARR,i+1,N,S,sum);
    cout << i << " " << sum << " " << S << endl;
    sum -= S*ARR[i];
    battles(ARR,i+1,N,S,sum);
    cout << i << " " << sum << " " << S << endl;

}
int main()
{
    long int tc;
    cin >> tc;
    while(tc>0)
    {
        P = 0;
        long long int sum = 0;
        long long int S = 1;
        long int N;
        cin >> N;
        long long int ARR[N];
        for(long int i=0;i<N;i++)
        {
            cin >> ARR[i];
        }
        //S++;
        eats(ARR,0,N,S,sum);
        //S--;
        //sum *= S*ARR[0];
        battles(ARR,0,N,S,sum);
        tc--;
        cout << P;
    }
}
