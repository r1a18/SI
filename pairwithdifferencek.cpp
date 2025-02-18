#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
using namespace std;
bool checkpair(int arr[],int n,int k)
{
    int p1=0,p2=0;
    while(p1<n && p2<n)
    {
        if((arr[p1]-arr[p2]==k) && p1 !=p2)
        return true;
        else if(arr[p1]-arr[p2]>k)
        {
          p2++;
        }
        else{
           p1++;
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
        sort(arr,arr+n);
        if(checkpair(arr,n,k))
        cout<<"true\n";
        else
        cout<<"false\n";
    }
    return 0;
}