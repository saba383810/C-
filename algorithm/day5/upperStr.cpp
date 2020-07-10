/*
transformのでtolowerやtoupperを使うとき
「::tolower」や「::toupper」として使わないとstdのnamespaceを認識してくれない問題
*/
#include<iostream>
#include<string>
#include<algotithm>

using namespace std;

int main(){
    string str;
    cin >>str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
}
