#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
        cout << 4*(N/625) + 3*(N/125) - (N/625) + 2*(N/25) - ((N/625) +(N/125)) + N/5 - (N/25+(N/125)+(N/625)) ;
        return 0;
}
