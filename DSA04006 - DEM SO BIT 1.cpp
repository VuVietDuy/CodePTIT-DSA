#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll u[55];
ll n, l, r, tmp;

ll Find(ll n, ll pos, int d)
{
    if(pos%2) return 1;
    ll x = u[d-1]+1;
    if(pos==x) return n&1;
    if(pos<x) return Find(n/2, pos, d-1);
    return Find(n/2,pos-x, d-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(u,0,sizeof(u));
        ll res = 0;
        cin>>n>>l>>r;
        u[1]=1;
        int d = 2;
        tmp = n/2;
        while(tmp>0)
        {
            u[d]=u[d-1]*2+1;
            tmp/=2;
            ++d;
        }
        d--;
        for(ll i=l; i<=r; i++)
        {
            res+= Find(n,i,d);
        }
        cout << res<<'\n';
    }
    return 0;
}