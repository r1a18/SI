#include <bits/stdc++.h>
using namespace std;
bool checkbit(int m,int i)
{
    if((m>>i)&1)
    return true;
    else
    return false;
}

int main() {
  int t;
  cin>>t;
  while(t--)
  {
      long n;
      cin>>n;
      long arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      long ans=0;
      for(int i=0;i<32;i++)
      {
          int set=0;
          for(int j=0;j<n;j++)
          {
              if(checkbit(arr[j],i))
              {
                  set++;
              }
          }
          ans+=set*(n-set)*(1<<i);
      }
      cout<<ans*2<<endl;
  }
    return 0;
}