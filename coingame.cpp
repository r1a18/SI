#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        int mini=min(x,y);
        int maxi=max(x,y);
        if(((x+y)%3==0)&&(mini*2>=maxi))
        {
            cout<<"YES";
        }
        else
        cout<<"NO";
        cout<<endl;
    }

    return 0;
}