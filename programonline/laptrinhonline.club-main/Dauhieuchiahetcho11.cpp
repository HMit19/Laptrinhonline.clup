#include <iostream>

using namespace std;

int main () {
    int t; cin >> t;
    string s;
    while(t--){
        int a[1004] = {0}, index = 1;
        cin >> s;
        for(int i = 0; i < s.size(); i++){
            a[index++] = s[i];
        }
        for(int i = 1; i < index; i++) {
            cout << a[i] << " ";
        }
    }

}