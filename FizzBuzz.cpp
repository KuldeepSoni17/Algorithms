#include<iostream>
using namespace std;
void fizzbuzz()
{
    long long int n;
    cin >> n;
    for(long long int i=1;i<=n;i++)
    {
        if(i%15==0)
        {
            cout << "FizzBuzz\n";
        }
        else if(i%5==0)
         {
            cout << "Buzz\n";
         }
        else if(i%3==0)
         {
            cout << "Fizz\n";
         }
         else
         {
             cout << i << endl;
         }
    }
}
int main()
{
 int tc;
 cin >> tc;
 while(tc)
 fizzbuzz();
}
