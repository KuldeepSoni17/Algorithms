#include <iostream>
using namespace std;
int res=0,K;
void goeast(int i,int j,int N,int M,int S,int ARR[][100]);
void gosouth(int i,int j,int N,int M,int S,int ARR[][100]);
void gosoutheast(int i,int j,int N,int M,int S,int ARR[][100])
{	cout << "HERE";
	S += ARR[i+1][j+1];
	if(S>K)
	{	S-=ARR[i+1][j+1];
		return;
	}
	if(i==N-1&&j==M-1)
	{
			res = max(S,res);
			S-=ARR[i+1][j+1];
			return;
	}
	if(j<M-1)
	{
	cout << "S " << S << " " << i << " " << j << endl;
	goeast(i,j+1,N,M,S,ARR);

	}
	if(i<N-1)
	{cout << "S " << S << " " << i << " " << j << endl;
		gosouth(i+1,j,N,M,S,ARR);}
	if(i<N-1 && j<M-1)
	{	cout << "S " << S << " " << i << " " << j << endl;
		gosoutheast(i+1,j+1,N,M,S,ARR);}

S-=ARR[i+1][j+1];

}
void goeast(int i,int j,int N,int M,int S,int ARR[][100])
{
	cout << "HERE";
	S += ARR[i][j+1];
	if(S>K)
	{
		S-=ARR[i][j+1];
		return;
	}
	if(i==N-1&&j==M-1)
	{
			res = max(S,res);
			S-=ARR[i][j+1];
			return;
	}
	if(j<M-1)
	{
	cout << "S " << S << " " << i << " " << j << endl;
	goeast(i,j+1,N,M,S,ARR);

	}
	if(i<N-1)
	{cout << "S " << S << " " << i << " " << j << endl;
		gosouth(i+1,j,N,M,S,ARR);}
	if(i<N-1 && j<M-1)
	{	cout << "S " << S << " " << i << " " << j << endl;
		gosoutheast(i+1,j+1,N,M,S,ARR);}

S-= ARR[i][j+1];

}
void gosouth(int i,int j,int N,int M,int S,int ARR[][100])
{
	S += ARR[i+1][j];
	if(S>K)
	{	S-=ARR[i+1][j];
		return;
	}
	if(i==N-1&&j==M-1)
	{
			res = max(S,res);
			S-=ARR[i+1][j];
			return;
	}
	if(j<M-1)
	{
	cout << "S " << S << " " << i << " " << j << endl;
	goeast(i,j+1,N,M,S,ARR);

	}
	if(i<N-1)
	{cout << "S " << S << " " << i << " " << j << endl;
		gosouth(i+1,j,N,M,S,ARR);}
	if(i<N-1 && j<M-1)
	{	cout << "S " << S << " " << i << " " << j << endl;
		gosoutheast(i+1,j+1,N,M,S,ARR);}
S-= ARR[i+1][j];
}
int main()
{
    int tc;
    cout << "HERE";
    for(int i=0;i<5;i++)
        cout << "HETE";
    cin >> tc;
    cout << tc;
    while(5>0)
    {
    	int N,M,S=0;
    	int ARR[N][100];
    	cin >> N >> M >> K;
    	for(int i=0;i<N;i++)
    	{
    		for(int j=0;j<M;j++)
    		{
    			cin >> ARR[i][j];
    		}
    	}
    	goeast(0,0,N,M,0,ARR);
    	gosouth(0,0,N,M,0,ARR);
    	gosoutheast(0,0,N,M,0,ARR);

    	//tc--;

    }

    return 0;
}
