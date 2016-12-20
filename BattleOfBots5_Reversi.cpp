#include <iostream>
#include<cstdlib>
using namespace std;
int ARR[10][10]={0},ALL[100][2]={0},id,allcntr,opp,maxcnt=0,maxrow,maxcol,prfcol,prfrow,prfmaxcnt=0;
bool prfprs=false;
void arnd(int i,int j,int MODARR[10][10])
{
    int cnt=0,ddgnl=true,udgnl=true,str=true,x,k,p,q;
    for(x=1,k=j-1;k>=0;k--,x++)//LEFT + LEFTUP + LEFTDOWN
    {
     if(MODARR[i][k]==id && str==true)
            {
            str = false;
            cnt += (j-1)-k;
            for(p=(j-1);p>k;p--)
                MODARR[i][p]=id;
            }
    if(MODARR[i][k]==3 || MODARR[i][k]==0)
        str = false;
        if(i-x>=0 && MODARR[i-x][k]==id && udgnl==true)
        {
            udgnl = false;
            cnt += (j-1)-k;
            for(x=1,p=(j-1);p>k;p--,x++)
                MODARR[i-x][p]=id;
        }
    if(MODARR[i-x][k]==3 || MODARR[i-x][k]==0)
        udgnl = false;
         if(i+x<10 && MODARR[i+x][k]==id && ddgnl==true)
        {
            ddgnl = false;
            cnt += (j-1)-k;
            for(x=1,p=(j-1);p>k;p--,x++)
                MODARR[i+x][p]=id;
        }
    if(MODARR[i+x][k]==3 || MODARR[i+x][k]==0)
        ddgnl = false;
    }

    cout << i << " " << j << " LEFT " << cnt << endl;
    udgnl = true;ddgnl = true;str=true;
      for(x=1,k=j+1;k<10;k++,x++) // RIGHT + UPRIGHT + DOWNRIGHT
    {
            if(MODARR[i][k]==id && str==true)
            {
            str = false;
            cnt += k-(j+1);
            for(p=j+1;p<k;p++)
                MODARR[i][p] = id;
            }
    if(MODARR[i][k]==3 || MODARR[i][k]==0)
        {str = false;}
        if(i-x>=0 && MODARR[i-x][k]==id && udgnl==true)
        {
            udgnl = false;
            cnt += k-(j+1);
            for(x=1,p=j+1;p<k;p++,x++)
                MODARR[i-x][p] = id;
        }
    if(MODARR[i-x][k]==3 || MODARR[i-x][k]==0)
        udgnl = false;
       if(i+x<10 && MODARR[i+x][k]==id && ddgnl==true)
        {
            ddgnl = false;
            cnt += k-(j+1);
            for(x=1,p=j+1;p<k;p++,x++)
                MODARR[i+x][p] = id;
        }
        if(MODARR[i+x][k]==3 || MODARR[i+x][k]==0)
        ddgnl = false;
    }
    str = true;
    cout << i << " " << j << " RIGHT " << cnt << endl;
      for(k=i-1;k>=0;k--)
    {
        if(MODARR[k][j]==id && str ==true)
            {
                str = false;
            cnt += (i-1)-k;
            for(int p=(i-1);p>k;p--)
            MODARR[p][j] = id;
            break;
            }
    if(MODARR[k][j]==3 || MODARR[k][j]==0)
        {str = false;
        break;}
    }
    str = true;
    cout << i << " " << j << " UP " << cnt << endl;
      for(k=i+1;k<10;k++)
    {
        if(MODARR[k][j]==id && str==true)
            {
                str==false;
            cnt += k-(i+1);
            for(int p=(i+1);p<k;p++)
                MODARR[p][j]=id;
            break;
            }
              if(MODARR[k][j]==3 || MODARR[k][j]==0)
        {str = false;
        break;}
    }
    cout << i << " " << j << " DOWN " << cnt << endl;
   for(int p=0;p<10;p++)
    {
           for(int q=0;q<10;q++)
    {
        cout << MODARR[p][q] << " ";
    }
    cout << endl;
    }
       if(maxcnt<=cnt)
    {
        maxrow = i;
        maxcol = j;
    }
    maxcnt = max(cnt,maxcnt);
    MODARR[i][j] = id;
    //UP
    bool up=true,left=true,rght=true,curr=false;
    for(p=(i-1);p>=0;p--)
    {
        for(q=0;q<10;q++)
        {
            if(MODARR[p][q]!=id)
            {
                up = false;
                break;
            }
        }
    }
    if(up==true)
    {
        for(q=0;q<j;q++)
        {
            if(MODARR[i][q]!=id)
        {
            left=false;
            break;
        }
        }
        if(left==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                prfcol=j;
                curr = true;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        else
        {
        for(q=j+1;q<10;q++)
        {if(MODARR[i][q]!=id)
        {
            rght=false;
            break;
        }}
        if(rght==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                curr = false;
                prfcol=j;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        }
    }

     up=true;left=true;rght=true;
    //DOWN
    if(curr==false)
     {
         for(p=(i+1);p<10;p++)
        {
        for(q=0;q<10;q++)
        {
            if(MODARR[p][q]!=id)
            {
                up = false;
                break;
            }
        }
        }
        if(up==true)
        {
        for(q=0;q<j;q++)
        {if(MODARR[i][q]!=id)
        {
            left=false;
            break;
        }
        }
        if(left==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                prfcol=j;
                curr = true;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        else
        {
        for(q=j+1;q<10;q++)
        {if(MODARR[i][q]!=id)
        {
            rght=false;
            break;
        }
        }
        if(rght==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                curr = false;
                prfcol=j;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        }

        }
     }

     up=true;left=true;rght=true;
     //LEFT
     if(curr==false)
     {
      for(p=0;p<10;p++)
        {
        for(q=0;q<=(j-1);q++)
        {
            if(MODARR[p][q]!=id)
            {
                up = false;
                break;
            }
        }
        }
        if(up==true)
        {
        for(q=0;q<i;q++)
        {
            if(MODARR[q][j]!=id)
        {
            left=false;
            break;
        }
        }
        if(left==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                prfcol=j;
                curr = true;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        else
        {
        for(q=i+1;q<10;q++)
        {if(MODARR[q][j]!=id)
        {
            rght=false;
            break;
        }}
        if(rght==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                curr = false;
                prfcol=j;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        }
        }


     }

    up=true;left=true;rght=true;
     //LEFT
     if(curr==false)
     {
      for(p=0;p<10;p++)
        {
        for(q=(j+1);q<10;q++)
        {
            if(MODARR[p][q]!=id)
            {
                up = false;
                break;
            }
        }
        }
        if(up==true)
        {
        for(q=0;q<i;q++)
        {
            if(MODARR[q][j]!=id)
        {
            left=false;
            break;
        }
        }
        if(left==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                prfcol=j;
                curr = true;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        else
        {
        for(q=i+1;q<10;q++)
        {if(MODARR[q][j]!=id)
        {
            rght=false;
            break;
        }}
        if(rght==true)
        {
            if(prfmaxcnt<=cnt)
            {   prfprs = true;
                prfrow=i;
                curr = false;
                prfcol=j;
                prfmaxcnt = max(cnt,prfmaxcnt);
            }
        }
        }
        }


     }


}

int main()
{
        allcntr = -1;
    for(int i=0;i<10;i++)
    {
    	for(int j=0;j<10;j++)
    	{
    		cin >> ARR[i][j];
    		if(ARR[i][j]==3)
    		{
                        allcntr++;
    					ALL[allcntr][0] = i;
                        ALL[allcntr][1] = j;

                if((i==0 && j==0) || (i==0 && j==9) || (i==9 && j==0) || (i==9 && j==9) )
                {
                cout << i << " " << j;
                exit(0);
                }
            }
    	}
    }
    int DUPARR[allcntr+1][10][10];

    for(int r=0;r<=allcntr;r++)
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                DUPARR[r][i][j] = ARR[i][j];
            }
        }
    }
        cin >> id;
        opp = (id*2)%3;
        for(int i=0;i<=allcntr;i++)
        {
            arnd(ALL[i][0],ALL[i][1],DUPARR[i]);
        }
        if(prfprs==true)
        {
        cout << prfrow << " " << prfcol;
        }
        else
        {cout << maxrow << " " << maxcol;}
return 0;
}
