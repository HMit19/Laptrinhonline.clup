#include<iostream>
using namespace std;
int main()
{
    int h,a,b,c;
    cin>>a>>b>>c;
    h=a*3600+b*60+c;
    if(a>=18||a<6)
    {
        if(h%25<=10)
            cout<<"ON";
        else
            cout<<"OFF";
    }
    else
        cout<<"OFF";
}