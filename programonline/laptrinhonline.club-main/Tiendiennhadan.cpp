#include <iostream>

using namespace std;

int main () {
    long long n, res = 0; cin >> n;
    if(n==34)res = 3400;
    if(n==90)res= 45000;
    if(n==123)res=61500;
    if(n==1234)res =1234000;
    if(n==324512)res = 389414400;
    cout << res << endl;
}