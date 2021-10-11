#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s.size() == 10 && s[0] == '0' && s[9] != '4' && s[9] != '7' && s[9] != '0'){
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}