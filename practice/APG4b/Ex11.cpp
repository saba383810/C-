#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int N,A,B,ans;
    string op;

    cin >> N >> A;

    ans = A;
    for(int i =1;i<N+1;i++)
    {
        cin >> op >> B;
        if (op == "+")
        {
            ans += B;
        }
        else if (op == "-")
        {
            ans -= B;
        }
        else if (op == "*")
        {
            ans *= B;
        }
        else if (op == "/")
        {
            if(B == 0)
            {
                cout << "error" << endl;
                break;
            }
            else
            {
                ans /= B;
            }
        }
        else 
        {
            cout << "error" << endl;
            break;
        }

        cout << i << ":" << ans << endl;

    }

}