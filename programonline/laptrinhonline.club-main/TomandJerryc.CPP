#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    long long m, n, p;
    cin >> m >> n >> p;
    if(abs(m - n) == abs(n-p)) cout << "The mouse has escaped" << endl;
    else if(abs(m - n) > abs(n-p)) cout << "CAT_B" << endl;
    else if(abs(m - n) < abs(n-p)) cout << "CAT_A" << endl;
    return 0;
}