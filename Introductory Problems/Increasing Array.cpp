
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long a = 0;
    long h;
    cin >> n;
    long arr[n];
    for(long x = 0;x<n;x++){
      cin>>arr[x];  
    }
    for(long x = 0;x<n-1;x++){
      if(arr[x]>arr[x+1]) {
          
          long v = arr[x];
          long z = arr[x+1];
          
      h = v-z ;
      a +=h;
      arr[x+1] = arr[x];
      } 
    }
    std::cout << a << std::endl;

    return 0;
}