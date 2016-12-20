#include<iostream>
#include<math.h>
using namespace std;


int fact(int num)
{
    int i;
    int total=1;
    for(i=num;i!=1;i--)
    {

    total=total*i;

    }
    return total;
}



int main()
{
    int coun=1;
    string S1;
    cout << "Enter a string: ";
    cin >> S1;

    cout<<"Answer"<<endl;
    int x = S1.length();
                        int h=fact(x);
    if(x<=6)
    {
                            loop:


                            for(int i=0;i<x*fact(x-2);i++)
                            {
                                for(int j=1;j<x;j++)
                        {
                            swap(S1[0],S1[j]);
                            cout<<coun<< "..."<<S1<<"...."<<i<<"..."<<j<<endl;
                            coun++;

                        }
                            }
    }
    else
        cout<<"Too large string...may become infinite loop"<<endl;


}






