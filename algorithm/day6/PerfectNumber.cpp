//完全数か完全数に近いか完全数じゃないかを判定するプログラム

#include <iostream>
using namespace std;
int main(void){

    int n,q,wa;
    cin >>q;
    for(int i=0;i<q;i++){
        wa=0;
        cin >> n;
        for (int j = 1; j < n; j++) {
            if (n % j == 0) {
                wa += j;
            }
        }
        if (wa == n) {
            cout <<"完全数です！"<<endl;
        }
        else if (wa-n == 1 || -(wa-n) == 1){
            cout << "完全数に近いです！" <<endl;;
        }
        else {
            cout <<"完全数じゃないです！"<<endl;;
        }
    }
    return 0;
}