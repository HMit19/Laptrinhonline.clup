#include<bits/stdc++.h>

using namespace std;

int main(){ 
    long long n, tg, count = 0;
    cin >> n;
    for(int i = 0; i < sqrt(n); i++){
        tg = sqrt(n - i * i);
        count += i * i + tg * tg == n && tg >= i ? 1 : 0;
    }
    cout << count << endl;
}
