#include <bits/stdc++.h>

using namespace std;

int main () {
	long long int x, t100 = 0, t50 = 0, t20 = 0, t10 = 0, t5 = 0, t2 = 0, t1 = 0, tg;
	cin >> x;
    tg = x;
	if(x >= 100){
		t100 += x/100;
		x %= 100;
	}
	if(x >= 50){
		t50 += x/50;
		x %= 50;
	}
	if(x >= 20){
		t20 += x/20;
		x %= 20;
	}
	if(x >= 10){
		t10 += x/10;
		x %= 10;
	}
	if(x >= 5){
		t5 += x/5;
		x %= 5;
	}
	if(x >= 2){
		t2 += x/2;
		x %= 2;
	}
	t1 = x;
	cout <<tg << endl;
	cout << t100 << " to R$ 100,00" << endl;
	cout << t50 << " to R$ 50,00" << endl;
	cout << t20 << " to R$ 20,00" << endl;
	cout << t10 << " to R$ 10,00" << endl;
	cout << t5 << " to R$ 5,00" << endl;
	cout << t2 << " to R$ 2,00" << endl;
	cout << t1 << " to R$ 1,00" << endl;
}