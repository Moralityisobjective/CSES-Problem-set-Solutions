#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long n;
   
    long p = 0;
    cin >> n;
    long arr[n];
    for(long x = 0;x<n-1;x++){
      cin>>arr[x];  
    }
    for(long x = 0;x<n-1;x++){
        p += arr[x];
        
    }
    
    long k = (n+1);
    long g = k*n;
      long h = g/2;
    std::cout << h-p << std::endl;
        
        
    
    
    
 
    return 0;
}