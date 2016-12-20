//Don't go up, means not above 3,3
#include <iostream>
#include<cstdlib>
using namespace std;
int ARR[10][10]={0},DWN[100][4]={0},UP[100][4]={0},PERF[100][4]={0},perfcntr=-1,id,opp,dwncntr=-1,upcntr=-1;
void perffill()
{   //cout << "PERFECT";
    //SORT THE ARRAY ACCRODING TO COL 3([2]) in decreasing order.
    int maxcnt = 0,index=-1;
    for(int i=0;i<=perfcntr;i++)
    {
        if(PERF[i][2]>maxcnt && PERF[i][3]==1)
        {
            index = i;
            maxcnt = PERF[i][2];
        }

    }
    if(index!=-1)
    {cout << PERF[index][0] << " " << PERF[index][1];
    exit(0);
    }
}
void downfill()
{
    //SORT ARRAY FIRST
    //cout << "DOWN";
    int index = -1,lowrow = -1;
    for(int i=dwncntr;i>=0;i--)
    {
        if(DWN[i][3]==1 && DWN[i][0]>lowrow)
        {
        index = i;lowrow=DWN[i][0];
        }
    }
    if(index!=-1)
    {
        cout << DWN[index][0] << " " << DWN[index][1];
        exit(0);
    }
}
void upfill()
{   //SORT ARRAY FIRST
    //cout << "UP";
   int index = -1,highrow = 10;
  for(int i=0;i<=upcntr;i++)
  {
      if(UP[i][3]==1 && UP[i][0]<highrow)
        {
        index = i;highrow=UP[i][0];
        }
  }
  if(index!=-1)
  {
      cout << UP[index][0] << " " << UP[index][1] ;
          //  cout << "UP" << endl;
        exit(0);
  }
}
void residue()
{
    //cout << "RESIDUE";
    for(int i=0;i<=dwncntr;i++)
    {cout << DWN[i][0] << " " << DWN[i][1];
        //cout << "RESIDUE" << endl;
        exit(0);
    }
      for(int i=0;i<=upcntr;i++)
    {cout << UP[i][0] << " " << UP[i][1];
        exit(0);
    }
}
int counttrans(int i,int j,int MODARR[10][10])
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

    //cout << i << " " << j << " LEFT " << cnt << endl;
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
    //cout << i << " " << j << " RIGHT " << cnt << endl;
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
    //cout << i << " " << j << " UP " << cnt << endl;
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
    MODARR[i][j] = id;

    return cnt;
}
  //ADD ELEM TO ARR

void makeperfarr(int i,int j,int MODARR[10][10],int cnt, int okayness)
{

    bool isperf=true;
    int q;
    for(int p=j;p<10;p++)//DOWNRIGHT
    {
        if(MODARR[i][p]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=i+1;isperf==true && p<10;p++)
            {   q = j-(p-i)>=0 ? j-(p-i) : 0;
                for(;isperf==true && q<10;q++)
                {
                    if(MODARR[p][q]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=j;p>=0;p--)//DOWNLEFT
    {
        if(MODARR[i][p]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=i+1;isperf==true && p<10;p++)
            {   q = j+(p-i)<=9 ? j-(p-i) : 9;
                for(;isperf==true && q>=0;q--)
                {
                    if(MODARR[p][q]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=j;p>=0;p--)//UPLEFT
    {
        if(MODARR[i][p]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=i-1;isperf==true && p>=0;p--)
            {   q = j+(i-p)<=9 ? j-(i-p) : 9;
                for(;isperf==true && q>=0;q--)
                {
                    if(MODARR[p][q]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=j;p<10;p++)//UPRIGHT
    {
        if(MODARR[i][p]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=i-1;isperf==true && p>=0;p--)
            {   q = j-(i-p)>=0 ? j-(i-p) : 0;
                for(;isperf==true && q<10;q++)
                {
                    if(MODARR[p][q]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=i;p<10;p++)//LEFTDOWN
    {
        if(MODARR[p][j]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=j-1;isperf==true && p>=0;p--)
            {   q = i-(j-p)>=0 ? i-(j-p) : 0 ;
                for(;isperf==true && q<10;q++)
                {
                    if(MODARR[q][p]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=i;p>=0;p--)//LEFTUP
    {
        if(MODARR[p][j]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=j-1;isperf==true && p>=0;p--)
            {   q = i+(j-p)<10 ? i+(j-p) : 10 ;
                for(;isperf==true && q>=0;q--)
                {
                    if(MODARR[q][p]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=i;p>=0;p--)//RIGHTUP
    {
        if(MODARR[p][j]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=j+1;isperf==true && p<10;p++)
            {   q = i+(p-j)<10 ? i+(p-j) : 10 ;
                for(;isperf==true && q>=0;q--)
                {
                    if(MODARR[q][p]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }
    isperf=true;
    for(int p=i;p<10;p++)//RIGHTDOWN
    {
        if(MODARR[p][j]!=id)
        {isperf=false;
        break;
        }
    }
    if(isperf==true)
    {
            for(int p=j+1;isperf==true && p<10;p++)
            {   q = i-(p-j)>=0 ? i-(p-j) : 0 ;
                for(;isperf==true && q<10;q++)
                {
                    if(MODARR[q][p]!=id)
                    {
                        isperf=false;
                        break;
                    }
                }
            }
            if(isperf==true)
            {
                perfcntr++;
                PERF[perfcntr][0] = i;
                PERF[perfcntr][1] = j;
                PERF[perfcntr][2] = cnt;
                PERF[perfcntr][3] = okayness;
                return ;
            }
    }


}

int isokay(int modarr[10][10])
{
    if(modarr[0][1]==id && ARR[0][1]!=id && ARR[0][0]!=id)
        return 2;
    if(modarr[0][8]==id && ARR[0][8]!=id && ARR[0][9]!=id)
        return 2;
    if(modarr[1][0]==id && ARR[1][0]!=id && ARR[0][0]!=id)
        return 2;
    if(modarr[1][1]==id && ARR[1][1]!=id && ARR[0][0]!=id)
        return 2;
    if(modarr[1][8]==id && ARR[1][8]!=id && ARR[0][9]!=id)
        return 2;
    if(modarr[1][9]==id && ARR[1][9]!=id && ARR[0][9]!=id)
        return 2;
    if(modarr[8][0]==id && ARR[8][0]!=id && ARR[9][0]!=id)
        return 2;
    if(modarr[8][1]==id && ARR[8][1]!=id && ARR[9][0]!=id)
        return 2;
    if(modarr[9][1]==id && ARR[9][1]!=id && ARR[9][0]!=id)
        return 2;
    if(modarr[8][9]==id && ARR[8][9]!=id && ARR[9][9]!=id)
        return 2;
    if(modarr[8][8]==id && ARR[8][8]!=id && ARR[9][9]!=id)
        return 2;
    if(modarr[9][8]==id && ARR[9][8]!=id && ARR[9][9]!=id)
        return 2;

    return 1;




}

int main()
{
    dwncntr = upcntr = -1;
    for(int i=0;i<10;i++) //INPUT
    {
    	for(int j=0;j<10;j++)
    	{
    		cin >> ARR[i][j];
    		if(ARR[i][j]==3)
    		{
                if((i==0 && j==0) || (i==0 && j==9) || (i==9 && j==0) || (i==9 && j==9) )
                {
                cout << i << " " << j;
                exit(0);
                }
                if(i<4)
                {
                    upcntr++;
                    UP[upcntr][0]=i;
                    UP[upcntr][1]=j;
                }
                else
                {
                    dwncntr++;
                    DWN[dwncntr][0] = i;
                    DWN[dwncntr][1] = j;
                }
            }
    	}
    }

    cin >> id;
    opp = (id*2)%3;

    int DUPDOWNARR[dwncntr+1][10][10];
    int DUPUPARR[upcntr+1][10][10];

    for(int r=0;r<=dwncntr;r++) //CREATE DUPDOWNARR
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                DUPDOWNARR[r][i][j] = ARR[i][j];
            }
        }
    }
     for(int r=0;r<=upcntr;r++) //CREATE DUPUPARR
    {
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                DUPUPARR[r][i][j] = ARR[i][j];
            }
        }
    }

    for(int i=0;i<=dwncntr;i++)
    {
        DWN[i][2] = counttrans(DWN[i][0],DWN[i][1],DUPDOWNARR[i]);
        DWN[i][3] = isokay(DUPDOWNARR[i]);
        makeperfarr(DWN[i][0],DWN[i][1],DUPDOWNARR[i],DWN[i][2],DWN[i][3]);
    }
     for(int i=0;i<=upcntr;i++)
    {
        UP[i][2] = counttrans(UP[i][0],UP[i][1],DUPUPARR[i]);
        UP[i][3] = isokay(DUPUPARR[i]);
        makeperfarr(UP[i][0],UP[i][1],DUPUPARR[i],UP[i][2],UP[i][3]);
    }

    perffill();
    downfill();
    upfill();
    residue();
return 0;
}
