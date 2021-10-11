#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
	double a, b, c, s;
	cin >> a >> b >> c;
	s = b * b - 4 * a * c;
	if(s <= 0 || a == 0){
		cout << "Impossivel calcular" << endl;
	}
	else if(s > 0){
		s = sqrt(s);
		cout << setprecision(5) << fixed;
		cout << "R1 = " << (-b + s)/(2 * a) << endl;
		cout << "R2 = " << (-b - s)/(2 * a) << endl;
	}
}