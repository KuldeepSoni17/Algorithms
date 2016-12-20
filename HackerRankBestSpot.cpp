#include<iostream>
using namespace std;
void show()
{

    show();
}
int main()
{
    wanderrow();
    int R,C,H,W;
    cin >> R >> C;
    int ARR[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin >> ARR[i][j];
        }
    }
    cin >> H >> W;
    int BST[H][W];
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            cin >> BST[i][j];
        }
    }



}
