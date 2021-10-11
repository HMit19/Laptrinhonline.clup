#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    map<string,bool> D;
    int n;
    getline(cin,s);
    cin>>n;
    while(n--) {cin>>x; D[x]=true;}
    stringstream si(s);
    while(si>>x) cout<<(D[x]?string(x.size(),'*'):x)<<" ";
}