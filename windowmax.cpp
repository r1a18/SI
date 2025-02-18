#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long int arr[n];
        vector<long int>res;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        deque<long int> st;
        for(int i=0;i<k;i++)
        {
            while(st.size()!=0&&st.back()<arr[i])
            {
                st.pop_back();
            }
            st.push_back(arr[i]);
        }
        res.push_back(st.front());
        for(int i=k;i<n;i++)
        {
            while(st.size()!=0&&st.back()<arr[i])
            {
                st.pop_back();
            }
            st.push_back(arr[i]);
            if(st.front()==arr[i-k])
            {
                st.pop_front();
            }
            res.push_back(st.front());
        }
        long int ans=0;
        for(int i=0;i<res.size();i++)
        {
            ans+=res[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}