#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    unsigned int revnum=0;
    scanf("%lld",&t);
    while(t--)
    {
        unsigned int n;
        scanf("%u",&n);
        for(int i=0;i<32;i++)
        {
            int bit=(n>>i)&1;
            revnum=revnum<<1;
            revnum|=bit;
        }
        printf("%u\n",revnum);

    }
    
    return 0;
}