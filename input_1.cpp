#include<iostream>
#include<string>

using  namespace std;

int main(){

	string l,s;
	l =  "入力された値は、";
	cout << "文字列を入力してください:";
	cin >> s;
	cout << l + s <<  "です。" << endl;
	return 0;

}
