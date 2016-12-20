#include<iostream>
#include<stack>
#include<cmath>
using namespace std;
stack<long> que1,que2;
long N;
struct plyr
{
    long strgth;
    long noofmat=0;
};
plyr plyrs[100001];

int main()
{
    long N,Q;
    cin >> N >> Q;
    long i,x;
    for(i=0;i<N;i++)
    {
        cin >> x;
        plyrs[i].strgth = x;
        //que1.push(i);
         if(i%2!=0)
        {
                plyrs[i].noofmat++;
                plyrs[i-1].noofmat++;
            if(plyrs[i].strgth>plyrs[i-1].strgth)
            {
                que1.push(i);
            }
            else
                que1.push(i-1);
        if((i+1)%4==0)
        { //cout << i+1 << "bg" << endl;
        	for(long p=2;p<=log2(i+1);p++)
    {	//cout << i+1 << p << endl;
            if((i+1)%((long)pow(2,p))==0)
        {
            long a = que1.top();
            que1.pop();
            long b = que1.top();
            que1.pop();
            plyrs[a].noofmat++;
            plyrs[b].noofmat++;
            if(plyrs[a].strgth>plyrs[b].strgth)
            {
                que1.push(a);
            }
            else
            {
                que1.push(b);
            }
        }
    }

        }

        }
    }
    if(i%2!=0)
    {
        que1.push(i-1);
    }

 	while(!((que1.empty() && que2.size()==1) || (que2.empty() && que1.size()==1)) )
 	{ cout << "HERE";
 		N = que1.size();
 		for(i=1;i<N;i+=2)
    	{   cout << "HERE1";
         		long a = que1.top();
         		que1.pop();
         		long b = que1.top();
         		que1.pop();
                plyrs[a].noofmat++;
                plyrs[b].noofmat++;
            if(plyrs[a].strgth>plyrs[b].strgth)
            {
                que2.push(a);
            }
            else
                que2.push(b);

        if((i+1)%4==0)
        { //cout << i+1 << "bg" << endl;
        	for(long p=2;p<=log2(i+1);p++)
    {	//cout << i+1 << p << endl;
            if((i+1)%((long)pow(2,p))==0)
        {
            long a = que2.top();
            que2.pop();
            long b = que2.top();
            que2.pop();
            plyrs[a].noofmat++;
            plyrs[b].noofmat++;
            if(plyrs[a].strgth>plyrs[b].strgth)
            {
                que2.push(a);
            }
            else
            {
                que2.push(b);
            }
        }
    }

        }

        }
    cout << N;
    if(N%2!=0)
    {
        que2.push(que1.top());
        que1.pop();
    }
    cout << "HERE2";
 		N = que2.size();
 		for(i=1;i<N;i+=2)
    	{cout << "HERE3";
         		long a = que2.top();
         		que2.pop();
         		long b = que2.top();
         		que2.pop();
                plyrs[a].noofmat++;
                plyrs[b].noofmat++;
            if(plyrs[a].strgth>plyrs[b].strgth)
            {
                que1.push(a);
            }
            else
                que1.push(b);

        if((i+1)%4==0)
        { //cout << i+1 << "bg" << endl;
        	for(long p=2;p<=log2(i+1);p++)
    {	//cout << i+1 << p << endl;
            if((i+1)%((long)pow(2,p))==0)
        {
            long a = que1.top();
            que1.pop();
            long b = que1.top();
            que1.pop();
            plyrs[a].noofmat++;
            plyrs[b].noofmat++;
            if(plyrs[a].strgth>plyrs[b].strgth)
            {
                que1.push(a);
            }
            else
            {
                que1.push(b);
            }
        }
    }

        }

        }

    if(N%2!=0)
    {
        que1.push(que2.top());
        que2.pop();
    }

 	}


    while(Q--)
    {
        long ind;
        cin >> ind;
        cout << plyrs[ind-1].noofmat << endl;
    }
}
