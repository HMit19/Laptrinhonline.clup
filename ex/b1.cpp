#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int n, res; cin >> n;
	double tg = 1 + log2(n*1.0);
	res = tg - (int)tg != 0 ? tg + 1 : tg;	
	cout << res << endl;
}