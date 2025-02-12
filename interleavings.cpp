#include <bits/stdc++.h>
using namespace std;
void interleavings(string str1,string str2,int idx1,int idx2,string temp,set<string>&results)
    {
        if(idx1==str1.size()&&idx2==str2.size())
        {
            results.insert(temp);
            return;
        }
        if(idx1<str1.size())
        {
            interleavings(str1,str2,idx1+1,idx2,temp+str1[idx1],results);
        }
        if(idx2<str2.size())
        {
            interleavings(str1,str2,idx1,idx2+1,temp+str2[idx2],results);
        }
    }
int main() {
    int t;
    cin>>t;
    int r=t;
    while(t--)
    {
        cout<<"Case #"<<r-t<<":"<<'\n';
        string a,b;
        cin>>a>>b;
        set<string>results;
        interleavings(a,b,0,0,"",results);
        for(const auto it:results)
        {
            cout<<it<<endl;
        }
    }
    return 0;
}