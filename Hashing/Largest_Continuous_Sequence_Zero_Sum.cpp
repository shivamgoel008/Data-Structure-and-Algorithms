#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}

ll solve(vector<ll>v)
{
    ll maxi=0;
    unordered_map<ll,ll>m;
    vector<ll>csum(v.size());
    pair<int,int>p;
    vector<int>ans;
    p.first=-1;
    p.second=-1;


    // cout<<accumulate(v.begin(),v.end(),0)<<endl;

    csum[0]=v[0];
    m[csum[0]]=0;

    if(v[0]==0)
    {
        p.first=0;
        p.second=-1;
        maxi=1;
    }

    for(ll i=1;i<v.size();i++)
    {
        if(v[i]==0)
        {
            // cout<<v[i]<<endl;
            // cout<<"YES"<<endl;
            if(1>maxi)
            {
                p.first=i;
                p.second=p.first-1;
            }
        }
        
        

        // cout<<"YES"<<endl;
        csum[i]=csum[i-1]+v[i];
        // cout<<csum[i]<<endl;
        if(csum[i]==0)
        {
            // cout<<"YES"<<endl;
            p.first=i;
            p.second=-1;
            maxi=max(i+1,maxi);
        }
        
        if(m.find(csum[i])!=m.end())
        {
           if(maxi<i-m[csum[i]])
            {
                p.first=i;
                p.second=m[csum[i]];
                maxi=max(maxi,i-m[csum[i]]);
            }
        }
        else 
        {
            m[csum[i]]=i;
        }

    }

    cout<<p.first<<" "<<p.second<<endl;
    for(int i=p.second+1;i<=p.first;i++)
    ans.push_back(v[i]);

    for(auto i:ans)
    cout<<i<<" ";
    cout<<endl;

    return maxi;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()
    {
        ll i,j,n;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        ll ans=solve(v);

        cout<<ans<<endl;
    }
    return 0;
}