#include <bits/stdc++.h>
using namespace std;
int cnt(int n,int m,int x)
{
    int val=n-pow(x,m);
    if(val==0)
    return 1;
    if(val<0)
    return 0;
    return (cnt(val,m,x+1)+cnt(n,m,x+1));
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<cnt(n,m,1)<<endl;
    }
    return 0;
}