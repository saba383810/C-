#include<iostream>
#include<string>

using namespace std;

int main (){
    string str;
    cin >> str;

    for(int i=0;i<str.size();i++){
        switch (str[i])
        {
        case 'A': str.replace(i,1,"4");
            break;
        case 'E': str.replace(i,1,"3");
            break;
        case 'G': str.replace(i,1,"6");
            break;
        case 'I': str.replace(i,1,"1");
            break;
        case 'O': str.replace(i,1,"0");
            break;
        case 'S': str.replace(i,1,"5");
            break;
        case 'Z': str.replace(i,1,"2");
            break;
        default:
            break;
        }
    }
    cout<<str <<endl;
    return 0;
}