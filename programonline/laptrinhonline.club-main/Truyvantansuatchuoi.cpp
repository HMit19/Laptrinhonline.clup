#include <bits/stdc++.h>

using namespace std;

int main () {
	int n, q; cin >> n;
	string s[n];
	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cin >> q;
	string str[q];
	int a[q] = {0};
	for(int i = 0; i < q; i++) {
		cin >> str[i];
		for(int j = 0; j < n; j++){
			if(str[i] == s[j]){a[i]++;}
		}
		cout << a[i] << endl;
	}
}
