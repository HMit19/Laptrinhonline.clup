#include<iostream>

using namespace std;

int main()
{
    int m, n, count = 0;
    cin >> n>> m;
    if(m == 3){
        cout << 2 << endl;
        return 0;
    }
    if(m > n && n <= 0)cout << "ERROR" << endl;
    else if (n >= 0){
        if(m > n){
            while(m != n){
                if(m / 2 > n){
                m /=2;
                count++;
                    if(m % 2 != 0){
                    m++;
                    count++;
                    }
                }else {
                    if(n * 2 == m){
                        count++;
                        break;
                    }
                    n--;
                    count++;
                }
            }
        }else {
            while(m != n){
                n--; count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}