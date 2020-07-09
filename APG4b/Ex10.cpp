//棒グラフの出力
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int A, B;
    cin >> A >> B;
    
    int cnt = 0;
    cout << "A:";
    while(cnt < A)
    {
        cout << "]";
        cnt++;
    }
    cout << endl;

    cnt = 0;
    cout << "B:";
    while(cnt < B)
    {
        cout << "]";
        cnt++;
    }
    cout << endl;

}