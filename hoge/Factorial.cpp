#include<iostream>
using namespace std;
int main()
{
	int Colc();
	int n,ans;
	cin  >> n;
	ans = Colc(n);
	cout << ans << endl;
}
int Colc(int x)
{
	int Colc_ans;
	if(x == 1)
	{
		return 0;
	}
	else
	{
		Colc_ans = x * Colc(x-1);
		return Colc_ans;
	}
}
