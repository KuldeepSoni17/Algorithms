#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T,i,Rx,Ry;
    scanf("%d",&T);
    int Px[T],Py[T],Qx[T],Qy[T];
    for(i=0;i<T;i++)
        {
        scanf("%d %d %d %d",&Px[i],&Py[i],&Qx[i],&Qy[i]);
    }
    for(i=0;i<T;i++)
        {
        Rx = abs(Qx[i]-Px[i]);
        if(Qx[i]<Px[i])
            {
        Rx = Qx[i] - Rx;
        }
        else
            {Rx = Qx[i] + Rx;}
        Ry = abs(Qy[i]-Py[i]);
        if(Qy[i]<Py[i])
            {Ry = Qy[i] - Ry;}
        else
            {
        Ry = Ry + Qy[i];
        }
    printf("%d %d",Rx,Ry);
        }
    return 0;

}
