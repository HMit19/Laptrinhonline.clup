#include <iostream>

using namespace std;

void gan(int n, int a[], int &st){
    bool kt;
    a[0] = 2;
    int i = 3; 
    while(i <= n){
        int j = 2;
        kt = true;
        while(j <= i / 2){
            if(i % j == 0){
                kt = false;
                break;
            }
            j++;
        }
        if(kt){
            a[st++] = i;
        }
        i++;
    }
}

bool check(int a){
    if(a<2){
        return false;
    }else {
        int j = 2;
        while(j <= a/2){
        if(a % j == 0)
        return false;
        j++;
        }
    }
    return true;
}

int main(){
    int n, st = 1, a[100000], res = 0;
    cin >> n;
    gan(n, a, st);
    for(int i = 0; i < st; i++){
        for(int j = 0; j < st; j++){
            int tg = n - (a[i]+a[j]);
            if(tg <= 0) break;
            if(check(tg)){
                res++;
                continue;
            }
        }
    }
    cout << res / 6<< endl;
}
