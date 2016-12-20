#include<cstdlib>
#include<iostream>
using namespace std;
int bulls,cows;
int sel[4] = {};
int ans[4] = {};
bool pos_arr[10][2] = {};
void generatenum()
{
int num=0;
for(int i=0;i<9&&num<4;i++)
{
    if(pos_arr[i][0]==true && pos_arr[i][1]==false)
    {
        sel[num] = i;
        pos_arr[i][1] = true;
        num++;
    }
}
}
void cowis4()//COMPLETE
{
    cout << "WE DID IT!" << endl;
    cout << ans[0] << ans[1] << ans[2] << ans[3] << endl;
    exit(0);
}
void cowis3()//complete
{
    cout << "C3B" << endl;
        cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
        cout << "ENTER BULLS AND COWS" << endl;
        cin >> bulls >> cows;
        if(cows==1)
        {
            ans[0] = sel[0];
            ans[1] = sel[1];
            cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
            if(cows==1)
            {
                ans[2] = sel[2];

                int lim = sel[3];

                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }
                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }

            exit(0);
            }
            else
            {
                ans[3] = sel[3];
                int lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }

            exit(0);
            }


        exit(0);
        }
        else if(cows==2)
        {
            ans[2] = sel[2];
            ans[3] = sel[3];
            cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
            if(cows==1)
            {
                ans[0] = sel[0];
                int lim = sel[1];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
            exit(0);
            }
            else
            {
                ans[1] = sel[1];
                int lim = sel[0];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[0] = sel[0];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[0] = sel[0];
                             cowis4();
                            }

                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }

            exit(0);
            }


        exit(0);
        }

exit(0);
}
void cow2bull1()//complete
{
      // cout << "HEREMAIN";
cout << "C2B1" << endl;
            cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
            if(cows==3)
            {  // cout << "HERE1";
                 int temp = sel[0];
                ans[2] = sel[2];
                ans[3] = sel[3];
                sel[0] = sel[1];
                sel[1] = temp;
                cowis3();
            exit(0);
            }

            cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
             if(cows==3)
            {
                 //cout << "HERE2";
                 int temp = sel[0];
                ans[1] = sel[1];
                ans[3] = sel[3];
                sel[0] = sel[2];
                sel[2] = temp;
                cowis3();
            }
            cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
            if(cows==3)
            {
               //  cout << "HERE3";
                int temp = sel[0];
                ans[2] = sel[2];
                ans[1] = sel[1];
                sel[0] = sel[3];
                sel[3] = temp;
                cowis3();
            }
             cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
           if(cows==3)
            {
             //    cout << "HERE4";
                int temp = sel[1];
                ans[0] = sel[0];
                ans[3] = sel[3];
                sel[1] = sel[2];
                sel[2] = temp;
            cowis3();
            }
                 cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
               if(cows==3)
            {
                 //cout << "HERE5";
                int temp = sel[1];
                ans[0] = sel[0];
                ans[2] = sel[2];
                sel[1] = sel[3];
                sel[3] = temp;
            cowis3();
            }
                cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
            cout << "ENTER BULLS AND COWS" << endl;
            cin >> bulls >> cows;
                if(cows==3)
            {
                // cout << "HERE6";
                int temp = sel[2];
                ans[0] = sel[0];
                ans[1] = sel[1];
                sel[2] = sel[3];
                sel[3] = temp;
            cowis3();
            }

            exit(0);
}

void cow2bull2()//complete
{
    cout << "C2B2" << endl;
    cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[1];
                 ans[1] = sel[0];
                 ans[2] = sel[2];
                 ans[3] = sel[3];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[1];
                 ans[2] = sel[3];
                 ans[3] = sel[2];
                 cows = 4;
                 cowis4();
                }
    cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[2];
                 ans[1] = sel[1];
                 ans[2] = sel[0];
                 ans[3] = sel[3];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[3];
                 ans[2] = sel[2];
                 ans[3] = sel[1];
                 cows = 4;
                 cowis4();
                }
    cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[3];
                 ans[1] = sel[1];
                 ans[2] = sel[2];
                 ans[3] = sel[0];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[2];
                 ans[2] = sel[1];
                 ans[3] = sel[3];
                 cows = 4;
                 cowis4();
                }
                cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[2];
                 ans[2] = sel[1];
                 ans[3] = sel[3];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[3];
                 ans[1] = sel[1];
                 ans[2] = sel[2];
                 ans[3] = sel[0];
                 cows = 4;
                 cowis4();
                }
                cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[3];
                 ans[2] = sel[2];
                 ans[3] = sel[1];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[2];
                 ans[1] = sel[1];
                 ans[2] = sel[0];
                 ans[3] = sel[3];
                 cows = 4;
                 cowis4();
                }
                cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==4)
                {
                 ans[0] = sel[0];
                 ans[1] = sel[1];
                 ans[2] = sel[3];
                 ans[3] = sel[2];
                 cowis4();
                }
                else if(cows==0)
                {
                 ans[0] = sel[1];
                 ans[1] = sel[0];
                 ans[2] = sel[2];
                 ans[3] = sel[3];
                 cows = 4;
                 cowis4();
                }

}

void cow2bull0()//CHECKING NEEDED
{
              {

              cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[0] = sel[0];
                    ans[1] = sel[1];
                    pos_arr[sel[2]][0] = false;
                    pos_arr[sel[3]][0] = false;
                    bool alldone = false;
                    int lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[2] = sel[2];
                                if(alldone==true)
                                {
                                    cows = 4;
                         cowis4();
                                }
                                          else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

                             pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}


                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[2] = sel[2];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
              }

               {
            //    cout << "HERE2";
               cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[0] = sel[0];
                    ans[2] = sel[2];
                    pos_arr[sel[1]][0] = false;
                    pos_arr[sel[3]][0] = false;
                    bool alldone = false;
                    int lim = sel[1];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[1] = sel[1];
                                if(alldone==true)
                                {
                                    cows = 4;
                                    cowis4();
                                }
                                          else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                               cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}


                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[1] = sel[1];
                                if(alldone==true)
                                {
                                    cows = 4;
                                    cowis4();
                                }
                                else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
               }
             {
// cout << "HERE3";
              cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[0] = sel[0];
                    ans[3] = sel[3];
                    pos_arr[sel[1]][0] = false;
                    pos_arr[sel[2]][0] = false;
                    bool alldone = false;
                    int lim = sel[1];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[1] = sel[1];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                          else
                                {
                    lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

                             pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }

                }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[2] = j;
                                alldone = true;}


                        }
                }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[1] = sel[1];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                else
                                {
                    lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[2] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
             }
               {
// cout << "HERE4";
               cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[1] = sel[1];
                    ans[2] = sel[2];
                    pos_arr[sel[3]][0] = false;
                    pos_arr[sel[0]][0] = false;
                    bool alldone = false;
                    int lim = sel[0];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                          else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

                 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }

                }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}


                        }
                }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
                                    cowis4();
                                }
                                else
                                {
                    lim = sel[3];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[3] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[3] = sel[3];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[3] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
               }
               {
                    // cout << "HERE5";
               cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[1] = sel[1];
                    ans[3] = sel[3];
                    pos_arr[sel[2]][0] = false;
                    pos_arr[sel[0]][0] = false;
                    bool alldone = false;
                    int lim = sel[0];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
                                    cowis4();
                                }
                                          else
                                {
                    lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

                             pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }

                }

                            }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[2] = j;
                                alldone = true;}



                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
                                    cowis4();
                                }
                                else
                                {
                    lim = sel[2];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[2] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[2] = sel[2];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[2] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
               }

                           {
// cout << "HERE6";
               cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
                cout << "ENTER BULLS AND COWS" << endl;
                cin >> bulls >> cows;
                if(cows==0)
                {
                    ans[3] = sel[3];
                    ans[2] = sel[2];
                    pos_arr[sel[1]][0] = false;
                    pos_arr[sel[0]][0] = false;
                    bool alldone = false;
                    int lim = sel[0];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                          else
                                {
                    lim = sel[1];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
                                cowis4();
                            }

                  pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
                                cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }

                }

                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[1] = j;
                                alldone = true;}


                        }
                }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                               if(cows==3)
                            {   ans[0] = sel[0];
                                if(alldone==true)
                                {
                                    cows = 4;
cowis4();
                                }
                                else
                                {
                    lim = sel[1];
                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==4)
                            {   ans[1] = sel[1];
cowis4();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


                                }
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                            else if(bulls==1)
                                {ans[1] = j;
                                alldone = true;}



                        }

                }
                exit(0);
                }
               }


exit(0);
}

void cow1bull3()//complete
{
    cout << "C1B3" << endl;
cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow2bull2();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow2bull2();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow2bull2();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow2bull2();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow2bull2();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow2bull2();
}
}

void cow1bull2()//complete
{
    cout << "C1B2" << endl;
cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow2bull1();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow2bull1();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow2bull1();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow2bull1();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow2bull1();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow2bull1();
}
}

void cow1bull1()//complete
{
    cout << "C1B1" << endl;
 cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow2bull0();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow2bull0();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow2bull0();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow2bull0();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow2bull0(
              );
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==2)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow2bull0();
}
}

void cow1bull0()//complete
{
    cout << "C1B0" << endl;
cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==0)
{
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==0)
{
    ans[1] = sel[1];
    pos_arr[sel[2]][0] = false;
    pos_arr[sel[3]][0] = false;
    pos_arr[sel[0]][0] = false;

                    int lim = sel[0];

                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }
                            pos_arr[j][1] = false;
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }

                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }


}
else
{
 ans[0] = sel[0];
    pos_arr[sel[2]][0] = false;
    pos_arr[sel[3]][0] = false;
    pos_arr[sel[1]][0] = false;

                    int lim = sel[1];

                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[1] = sel[1];
                                cow2bull0();
                            }



                            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[1] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[1] = sel[1];
                                cow2bull0();
                            }

                  pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
       }
                }


}
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==0)
{

    ans[2] = sel[2];
    pos_arr[sel[1]][0] = false;
    pos_arr[sel[3]][0] = false;
    pos_arr[sel[0]][0] = false;

                    int lim = sel[0];

                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }
                             pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;

                        }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                        }
                }


}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==0)
{

    ans[3] = sel[3];
    pos_arr[sel[1]][0] = false;
    pos_arr[sel[2]][0] = false;
    pos_arr[sel[0]][0] = false;

                    int lim = sel[0];

                for(int j=(lim+1);j<=9;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }
            pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
             }
                }
                for(int j=0;j<lim;j++)
                {
                    if(pos_arr[j][0]==true && pos_arr[j][1]==false)
                        {
                            sel[0] = j;
                            pos_arr[j][1] = true;
                            cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
                            cout << "ENTER BULLS AND COWS" << endl;
                            cin >> bulls >> cows;
                            if(cows==2)
                            {   ans[0] = sel[0];
                                cow2bull0();
                            }

 pos_arr[j][1] = false;
                            if(bulls==0)
                            pos_arr[j][0] = false;
                        }
                }


}



}

void cow0bull4()//complete
{cout << "C0B4" << endl;
cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow1bull3();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow1bull3();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow1bull3();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow1bull3();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow1bull3();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow1bull3();
}
}

void cow0bull3()//complete
{
    cout << "C0B3" << endl;
cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow1bull2();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow1bull2();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow1bull2();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow1bull2();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow1bull2();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow1bull2();
}

}

void cow0bull2()//complete
{
    cout << "C0B2" << endl;
    cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow1bull1();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow1bull1();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow1bull1();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow1bull1();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow1bull1();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow1bull1();
}

}

void cow0bull1()//complete
{cout << "C0B1" << endl;
    cout << sel[1] << sel[0] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
     sel[0] = sel[1];
    sel[1] = temp;
    cow1bull0();
}
cout << sel[2] << sel[1] << sel[0] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[2];
    sel[2] = temp;
    cow1bull0();
}
cout << sel[3] << sel[1] << sel[2] << sel[0] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[0];
    sel[0] = sel[3];
    sel[3] = temp;
    cow1bull0();
}
cout << sel[0] << sel[2] << sel[1] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[2];
    sel[2] = temp;
    cow1bull0();
}
cout << sel[0] << sel[3] << sel[2] << sel[1] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[1];
    sel[1] = sel[3];
    sel[3] = temp;
    cow1bull0();
}
cout << sel[0] << sel[1] << sel[3] << sel[2] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==1)
{   int temp = sel[2];
    sel[2] = sel[3];
    sel[3] = temp;
    cow1bull0();
}

}
void cow0bull0();
void start()
{
generatenum();
cout << sel[0] << sel[1] << sel[2] << sel[3] << endl;
cout << "ENTER BULLS AND COWS" << endl;
cin >> bulls >> cows;
if(cows==4)
{   ans[0] = sel[0];
    ans[1] = sel[1];
    ans[2] = sel[2];
    ans[3] = sel[3];
    cowis4();
}
else if(cows==3)
{
    cowis3();
}
else if(cows==2)
{
    if(bulls==0)
    {
        cow2bull0();
    }
    else if(bulls==1)
    {
        cow2bull1();
    }
    else if(bulls==2)
    {
        cow2bull2();
    }
}
else if(cows==1)
{
    if(bulls==0)
    {
        cow1bull0();
    }
    else if(bulls==2)
    {
        cow1bull2();
    }
    else if(bulls==3)
    {
        cow1bull3();
    }
    else if(bulls==1)
    {
       cow1bull1();
    }
}
else if(cows==0)
{
    if(bulls==0)
    {
        cow0bull0();
    }
    else if(bulls==2)
    {
        cow0bull2();
    }
    else if(bulls==3)
    {
        cow0bull3();
    }
    else if(bulls==1)
    {
       cow0bull1();
    }
    else if(bulls==4)
    {
        cow0bull4();
    }
}

}

void cow0bull0()//complete
{
    pos_arr[sel[1]][0] = false;
    pos_arr[sel[2]][0] = false;
    pos_arr[sel[0]][0] = false;
    pos_arr[sel[3]][0] = false;
    start();
}
int main()
{
for(int i=0;i<=9;i++)
{
    pos_arr[i][0]=true;
    pos_arr[i][1]=false;
}
start();
}


