#include<iostream>

using namespace std;

int main(){
    int n, k, res = 0, count = 0, max = 0;
    cin >> n;
    while(n--){
        cin >> k;
        if(k == 1){
            res++;
            count = 0;
        }
        if(k == 0){
            count++;
        }
        max = count > max ? count : max;
    }
    if(max >= 2) res += 2;
    else res += max;
    cout << res << endl;
    return 0;
}
