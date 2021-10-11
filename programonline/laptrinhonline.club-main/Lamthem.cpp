#include<iostream>

using namespace std;

int main()
{
    long long res;
    int n;
    cin >> n;
    if(n == 0) res = 0;
    for(int i = 0; i <= n; i++){
        if(i == 1)res = 1;
        else res *= i;
    }
    cout << res << endl;
    return 0;
}