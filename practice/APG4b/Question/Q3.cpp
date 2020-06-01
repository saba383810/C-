#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int textInt1=500,textInt2=500,textIntDummy;
    
    string text1 ,text2,ans ="Yes";
    
    cin >> text1 >> text2;

    for (int i = 0;i<text1.size();i++){
        textIntDummy = text1[i];
        if(textInt1 > textIntDummy){
            textInt1 = textIntDummy;
        }
    }
    for (int i = 0;i<text2.size();i++){
        textIntDummy = text2[i];
        if(textInt2 > textIntDummy){
            textInt2 = textIntDummy;
        }
    }
    if(textInt1>textInt2 || text1 ==text2) ans ="No";
    
    
    cout << ans <<endl;


}