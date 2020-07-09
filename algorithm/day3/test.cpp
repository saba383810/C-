//if(i)の挙動確認のテストプログラムです。

#include<iostream>
using namespace std;

int main()
{
    int N = 5;
    for(int i=0;i<N;i++ )
    {
        if(i) cout <<i<< "で分岐に入ったよ" <<endl;
    }
    cout << "分岐の外だよ" <<endl;
}