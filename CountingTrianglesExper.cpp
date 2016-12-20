#include <iostream>
#include <array>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    array< array<int, 10>, 30 > boxes = {};
    int k,d;

    while(cin >> k >> d) {

        for(int i = 0; i < k; ++i) {
            fill(boxes[i].begin(), boxes[i].end(), INT_MAX);
            for(int j = 0; j < d; ++j)
                cin >> boxes[i][j];
            sort(boxes[i].begin(), boxes[i].begin() + d); // sort the first d elemenents
        }
        sort(boxes.begin(), boxes.begin() + k);
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<d;j++)
        {
            cout << boxes[i][j] << " ";
        }
        cout << endl;
    }
}
