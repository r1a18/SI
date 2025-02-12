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
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int sum2=0;
        for(int i=1;i<=n+1;i++)
        {
            sum2=sum2+i;

        }
        cout<<sum2-sum<<endl;

    }
    return 0;
}