#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char c;
	cin >> c;
	double a[12][12], sl = 10, vt = 1; double s = 0;
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < 5; i++){
		for(int j = vt; j <= sl; j++){
			s += a[i][j];
		}
		sl--;
		vt++;
	}
	cout << setprecision(1) << fixed;
	if(c == 'S')cout << s << endl;
	else cout << s/30 << endl;
}
