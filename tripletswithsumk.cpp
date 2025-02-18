#include <bits/stdc++.h>
using namespace std;
bool find(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int l,r;
    for(int i=0;i<n;i++)
    {
        l=i+1;
        r=n-1;
        while(l<r)
        {
            if(arr[i]+arr[l]+arr[r]==k)
            return true;
            else if(arr[i]+arr[l]+arr[r]<k)
            l++;
            else
            r--;
        }
    }
    return false;
}

int main() {
   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       if(find(arr,n,k))
       cout<<"true"<<endl;
       else
       cout<<"false"<<endl;
   }
    return 0;
}