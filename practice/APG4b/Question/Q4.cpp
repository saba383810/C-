// ひなあられの問題

#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (int)(n);i++)


int main ()
{

    int N;
    cin >>N;
    int color[4] = {0,0,0,0};

    rep(i,N)
    {
        char inData;
        cin >> inData;
        if(inData == 'P') color[0]++;
        else if(inData == 'W') color[1]++;
        else if(inData == 'G') color[2]++;
        else if(inData == 'Y') color[3]++; 
    }
    int cnt = 0;
    rep(i,4)
    {
        if(color[i]>0) cnt++;
    }
    if(cnt == 3)
    {
        cout << "Three" << endl;
    }
    else if(cnt == 4)
    {
        cout << "Four" << endl;
    }
    
}