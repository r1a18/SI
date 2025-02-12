#include <bits/stdc++.h>
using namespace std;
long long count(long long n)
{
    long long c=0;
    long long factor=5;
    while(n>=factor)
    {
        c+=n/factor;
        factor*=5;
    }
    return c;
}

int main() {

     int t;
     cin>>t;
     while(t--)
     {
         long long n;
         cin>>n;
         cout<<count(n)<<endl;
     }
    return 0;
}