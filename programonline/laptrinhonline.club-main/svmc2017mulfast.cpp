#include <iostream>
using namespace std;

int main (){ 
    int t;cin >> t;
    long long a, b;
    while(t--){
        cin >> a >> b;
        if(a * b >= 2147483647){
            cout << "Cảnh báo: dữ liệu đầu vào / đầu ra lớn, hãy cẩn thận với một số ngôn ngữ" << endl;
        }else cout << a * b << endl;
    }
    return 0;
}
