#include <iostream>

using namespace std;

int main()
{
    int n, m;string s;
    cin >> n >> m;
    while(m--){
        cin >> s;
        n += s == "fechou" ? 1 : -1;
    }
    cout << n << endl;
}