
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll p[1500001]={0};

void prime(ll *p)
{
    ll i,j;
    for(i=3;i<=1500001;i=i+2)
    p[i]=1;

    for(i=3;i*i<=1500001;i=i+2)
    {
        if(p[i]==1)
        {
            for(j=i*i;j<=1500001;j=j+i)
            {
                p[j]=0;
            }
        }
    }

    p[0]=p[1]=0;
    p[2]=1;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prime(p);
    test()
    {
        ll n,i,cnt;
        cin>>n;

        vector<ll>v(n);
        
        for(i=0;i<n;i++)
        cin>>v[i];

        vector<ll>ans(n);

        cnt=0;

        for(i=0;i<1500001;i++)
        {
            if(p[i]==1)
            {
                ans[cnt]=i;
                cnt++;
            }
            if(cnt==n)
            break;
        }

        for(i=0;i<n;i++)
        {
            if(v[i]!=i+1)
            {
                ans[i]=ans[v[i]-1];
            }
        }

        for(auto i:ans)
        cout<<i<<" ";

        cout<<endl;

    }
    return 0;
}