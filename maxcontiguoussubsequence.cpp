#include <bits/stdc++.h>
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
        int j=0;
        int ans=0;
        sort(arr,arr+n);
        unordered_set<int>hs;
        for(int i=0;i<n;i++)
        {
            hs.insert(arr[i]);
        }       
        for(int i=0;i<n;i++){ 
            if(hs.find(arr[i]-1)==hs.end())
            j=arr[i];
            while(hs.find(j)!=hs.end())
            {
                j++;
            }
            ans=max(ans,j-arr[i]);
        }
         cout<<ans<<endl;
    }
    return 0;
}