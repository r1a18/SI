#include <bits/stdc++.h>
using namespace std;
void find(int arr[],int n)
{
    priority_queue<int>l;
    priority_queue<int>r;
    for(int i=0;i<n;i++)
    {
        if(i==0||l.top()>arr[i])l.push(arr[i]);
        else r.push(arr[i]*-1);
        if(l.size()-r.size()==0||l.size()-r.size()==1)
        cout<<l.top()<<" ";
        if(l.size()>r.size()+1)
        {
            int maxi=l.top();
            r.push(maxi*-1);
            l.pop();
            cout<<l.top()<<" ";
        }
        else if(l.size()<r.size())
        {
            int mini=r.top();
            l.push(mini*-1);
            r.pop();
            cout<<l.top()<<" ";
        }
        //cout<<l.top()<<" ";
    }
}
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
        find(arr,n);
        cout<<endl;
    }
    return 0;
}