#include <bits/stdc++.h>
using namespace std;
int N=1e6;
vector<bool>isPrime(N+1,true);
void gen()
{
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=0;i*i<=N;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=N;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
}
vector<long>primes(long n)
{
    vector<long> arr;
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            arr.push_back(i);
        }
    }
    return arr;
}
int main() {
    gen();
    int t;
    cin>>t;
    while(t--)
    {
        long a,b;
        cin>>a>>b;
        vector<long>arr=primes(sqrt(b));
        vector<bool>lis(b-a+1,true);
        if(a==1)
        {
            lis[0]=false;
        }
        for(auto i:arr)
        {
            long x=max(i*i,(a+i-1)/i*i);
            if(x<a)
            {
                x+=i;
            }
            for(long j=x;j<=b;j=j+i)
            {
                lis[j-a]=false;
            }
        }
        for(long i=a;i<=b;i++)
        {
            if(lis[i-a])
            {
                cout<<i<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}