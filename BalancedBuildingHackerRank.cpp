#include <iostream>
using namespace std;
int n;
long long S,M,P,res=0,tot=0,maxi,mini;
void decr(long arr[],int i,long los);
void next(long arr[],int i,long los);
void incr(long arr[],int i, long los)
{
    arr[i]++;
    los += P;
	tot = 0;
	long temp=arr[0];
	for(int j=1;j<n;j++)
	{
		if(temp==arr[j])
		tot += S;
		else
		temp = arr[j];
	}
	tot -= los;
	res = res<tot ? tot : res;

	if(arr[i]>=maxi)
	{ arr[i]--;	return;	}

	incr(arr,i,los);
	if(i+1<n)
	next(arr,i+1,los);
	arr[i]--;
	los -= P;
}
void decr(long arr[],int i, long los)
{
	arr[i]--;
	los += M;
		tot = 0;
	long temp=arr[0];
	for(int j=1;j<n;j++)
	{
		if(temp==arr[j])
		tot += S;
		else
		temp = arr[j];
	}
	tot -= los;
	res = res<tot ? tot : res;
	if(arr[i]<=mini)
	{
		arr[i] ++ ;
		return;
	}
	decr(arr,i,los);
	if(i+1<n)
	next(arr,i+1,los);
	arr[i]++;
	los -= M;
}
void next(long arr[],int i,long los)
{
    incr(arr,i,los);
	decr(arr,i,los);
	if(i+1<n)
	next(arr,i+1,los);
}
int main()
{
   // cout << "Hello World!" << endl;
    //int n;
    cin >> n;
    long arr[n];
    //long long S,M,P;
    cin >> S >> M >> P;
    cin >> arr[0];
    maxi = mini = arr[0];
    for(int i=1;i<n;i++)
    {
    	cin >> arr[i];
    	if(arr[i]>maxi)
    	maxi = arr[i];
    	if(arr[i]<mini)
    	mini = arr[i];
    }

    incr(arr,0,0);

    decr(arr,0,0);

    next(arr,0,0);
    cout << res;
    return 0;
}

