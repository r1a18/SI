#include <bits/stdc++.h>
using namespace std;
long count(long n)
{
    long c=0;
    while(n>0)
    {
        c+=(n/5);
        n/=5;
    }
    return c;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool f=0;
        if(n==0)
        {
            cout<<4<<endl;
        }
        else
        {
            long low=1,high=1e14;
            while(low<=high)
            {
                long mid=(low+high)/2;
                if(count(mid)==n)
                {
                    f=1;
                    break;
                }
                else if(count(mid)<n)
                    low=mid+1;
                else
                {
                    high=mid-1;
                }
            }
                if(f)

                    cout<<5<<endl;
                else
                cout<<0<<endl;
        }

    }
    
    return 0;
}