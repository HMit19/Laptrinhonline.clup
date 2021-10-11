#include <bits/stdc++.h>

using namespace std;

int main () {
	int n;
	long long int a[100];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i < n; i++) {
		if(a[i] == a[i+1]){
			cout << 0 << endl;
			return 0;
		}
	}
    for(int i = 1; i < n-2; i++){
        if((a[i] > a[i+1] && a[i+1] > a[i + 2])||a[i] < a[i+1] && a[i + 1] < a[i + 2]){
            cout << 0 << endl;
			return 0;
        }
    }
	cout << 1 << endl;
}