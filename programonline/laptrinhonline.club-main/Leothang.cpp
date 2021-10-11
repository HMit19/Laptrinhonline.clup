#include <bits/stdc++.h> 
using namespace std; 

// dung de quy 
int sobac(int n, int m) 
{ 
  if (n == 1) 
  { 
    return n; 
  } 
  int res = 0; 
  for(int i = 1; i <= m && i <= n; i++) 
  { 
    res += sobac(n - i, m); 
  } 
  return res; 
} 

int main() 
{ 
  int s; 
  cin >> s;
  cout << sobac(s + 1, 3); 
  return 0; 
}