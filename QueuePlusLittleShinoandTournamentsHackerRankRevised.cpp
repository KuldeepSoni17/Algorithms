#include<iostream>
#include<queue>
using namespace std;
struct plyr
{
    long strgth;
    long noofmat=0;
};
int main()
{
    long N,Q;
    cin >> N >> Q;
    plyr plyrs[N];
    queue<long> que1,que2;
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
                que2.push(i);
            }
            else
                que2.push(i-1);
        }
         if(i+1%4==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%8==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%16==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%32==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%64==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%128==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%256==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%512==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%1024==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%2048==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%4096==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
     if(i+1%8192==0)
    {
    	long a = que2.front();
    	que2.pop();
    	long b = que2.front();
    	que2.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que2.push(a);
    	}
    	else
    	que2.push(b);
    }
    }
    if(i%2!=0)
    {
        que2.push(i-1);
    }
    N = que2.size();
    for(i=0;i<N;i++)
    {
        //que1.push(i);
        if(i%2!=0)
        {
            long a = que2.front();
            que2.pop();
            long b = que2.front();
            que2.pop();
            plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);


        }
         if(i+1%4==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%8==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%16==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%32==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%64==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%128==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%256==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%512==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%1024==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%2048==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%4096==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
     if(i+1%8192==0)
    {
    	long a = que1.front();
    	que1.pop();
    	long b = que1.front();
    	que1.pop();
        plyrs[a].noofmat++;
        plyrs[b].noofmat++;
    	if(plyrs[a].strgth>plyrs[b].strgth)
    	{
    		que1.push(a);
    	}
    	else
    	que1.push(b);
    }
    }
    if(i%2!=0)
    {
        que1.push(i-1);
    }



    //cout << que1.size();
 while(!((que1.empty() && que2.size()==1) || (que2.empty() && que1.size()==1)) )
    {   //cout << "DOING" ;
            while(!que1.empty())
             {if(que1.size()==1)
                {
                que2.push(que1.front());
                //cout << que1.front() << "Lonely";
                que1.pop();
                }
                else
                {
                    long a = que1.front();
                  //  cout << que1.front();
                    que1.pop();
                    long b = que1.front();
                    //cout << que1.front() << endl;
                    que1.pop();

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

             while(!que2.empty())
             {if(que2.size()==1)
                {
                que1.push(que2.front());
                //cout << que2.front() << "Lonely";
                que2.pop();
                }
                else
                {
                    long a = que2.front();
                  //  cout << que2.front();
                    que2.pop();
                    long b = que2.front();
                    //cout << que2.front() << endl;
                    que2.pop();

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

    while(Q--)
    {
        long ind;
        cin >> ind;
        cout << plyrs[ind-1].noofmat << endl;
    }
}
