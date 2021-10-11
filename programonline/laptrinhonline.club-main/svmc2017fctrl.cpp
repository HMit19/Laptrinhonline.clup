#include <iostream>

using namespace std;
long long gt(int x){
    long long k =1;
    for(int i=1; i <=x; i++) k *=i;
    return k;
}

int main (){
    int t; cin >> t; 
    while(t--){
        int x; cin >>x;
        cout << gt(x) << endl;
    }
}