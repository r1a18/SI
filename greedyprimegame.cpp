#include <bits/stdc++.h>
using namespace std;
bool isprime(int m)
{
    if(m==1||m==0)
    {
        return false;
    }
    for(int i=2;i*i<=m;i++)
    {
        if(m%i==0)
        {
            return false;
        }
    }
    return true;
}
int search(vector<int>arr,int k)
{
    int lo=0,hi=arr.size()-1;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<=k)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arrp;
    for(int i=0;i<100001;i++)
    {
        if(isprime(i))
        arrp.push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        while(n>1){
        int idx=search(arrp,n);
        if(idx==-1)
        {
            break;
        }
        n-=arrp[idx];
        c++;
        }
        if(c%2!=0)
        cout<<"First"<<endl;
        else
        cout<<"Second"<<endl;
    }
    return 0;
}