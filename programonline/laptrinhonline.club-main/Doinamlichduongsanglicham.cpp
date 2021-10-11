#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y, t;cin >> t;
    while(t--){
        cin>>n;
    if(n>=0)
    {
        x = n % 10;
        y = n % 12;
    }
    goto begin;
    begin:
        switch(x)
        {
            case 0: cout<<"canh ";
                break;
            case 1: cout<<"tan ";
                break;
            case 2: cout<<"nham ";
                break;
            case 3: cout<<"quy ";
                break;
            case 4: cout<<"giap ";
                break;
            case 5: cout<<"at ";                
                break;
            case 6: cout<<"binh ";
                break;
            case 7: cout<<"dinh ";
                break;
            case 8: cout<<"mau ";
                break;
            case 9: cout<<"ky ";
                break;
    
        }
        switch(y)
        {
            case 0 : cout<<"than"<<endl;
                break;
            case 1 : cout<<"dau"<<endl;
                break;
            case 2 : cout<<"tuat"<<endl;
                break;
            case 3 : cout<<"hoi"<<endl;
                break;
            case 4 : cout<<"ti"<<endl;
                break;
            case 5 : cout<<"suu"<<endl;
                break;
            case 6 : cout<<"dan"<<endl;
                break;
            case 7 : cout<<"mao"<<endl;
                break;
            case 8 : cout<<"thin"<<endl;
                break;
            case 9 : cout<<"ty"<<endl;
                break;
            case 10 : cout<<"ngo"<<endl;
                break;
            case 11 : cout<<"mui"<<endl;
                break;
        }
    }
}