#include <bits/stdc++.h>
using namespace std;
void generate(string str,int n,int oc,int cc,int idx)
{
    if(idx == 2*n)
    {
        cout<<str<<endl;
        return;
    }
    if(oc<n)
    {
        //str+='{';
        generate(str+'{',n,oc+1,cc,idx+1);
    }
    if(cc<oc)
    {
        //str+='}';
        generate(str+'}',n,oc,cc+1,idx+1);
    }
}

int main() {
    int t;
    cin>>t;
    int r=t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"Test Case #"<<(r-t)<<":"<<endl;
        int idx=0;
        int oc=0,cc=0;
        string str;
        generate(str,n,0,0,0);
    }
    return 0;
}