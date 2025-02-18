#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int arr[n];
         for(int i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         int l=0;
         int r=n-1;
         int ansl=0;
         int ansr=0;
         int res=0;
         while(l<=r)
         {
             if(ansl<=ansr)
             {
                 ansl=max(ansl,arr[l]);
                  res+=ansl-arr[l];
                 l++;
             }
             else
             {
                 ansr=max(ansr,arr[r]);
                  res+=ansr-arr[r];
                 r--;
             }
         }
          cout<<res<<endl;
     }
    return 0;
}