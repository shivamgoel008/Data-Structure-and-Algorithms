#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1e9 + 7
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


/* Think More, Code Less */
/* Soch bo*dk Soch */

bool compare(ll a,ll b)
{
    return a<b;
}

ll solve(vector<ll>v,ll n,ll k)
{
    ll dp[n]={0},i,j;

    
    ll no;
    if(n%k==0)
    no=n/k;

    else no=n/k+1;

    for(i=0;i<k;i++)
    dp[i]=v[i];
    

    ll cnt=1;

    ll prev=0;
    pair<ll,ll>f={INT_MIN,-1};
    pair<ll,ll>s={INT_MIN,-1};

        for(i=k;i<n;i++)
        {
            ll no=i/k;

            

            if(no!=prev)
            {
                
                for(j=(no-1)*k;j<no*k and j<n;j++)
                {
                    if(v[i]>f.first)
                    {
                        f.first=v[j];
                        f.second=j;
                    }
                }

                for(j=(no-1)*k;j<no*k and j<n;j++)
                {
                    if(v[i]>s.first)
                    {
                        if(j!=f.second)
                        {
                            s.first=v[j];
                            s.second=j;
                        }
                    }
                }
                // cout<<i<<endl;

                if(abs(i-f.second)==k)
                {
                    dp[i]=max(v[i],v[i]+s.first);
                }

                else if(abs(i-s.second)==k)
                {
                    dp[i]=max(v[i],v[i]+f.first);
                }

                else 
                {
                    dp[i]=max(v[i],v[i]+max(f.first,s.first));
                }
                prev=no;
            }
            // cout<<endl;
            // if(i==n-1)
            // cout<<maxi<<endl;

            else 
            {
                // cout<<i<<endl;
                
                if(abs(i-f.second)==k)
                {
                    dp[i]=max(v[i],v[i]+s.first);
                }

                else if(abs(i-s.second)==k)
                {
                    dp[i]=max(v[i],v[i]+f.first);
                }

                else 
                {
                    dp[i]=max(v[i],v[i]+max(f.first,s.first));
                }
            }
            
        }


        // for(i=0;i<n;i++)
        // cout<<dp[i]<<" ";
        // cout<<endl;


        ll ans=0;
    for(i=0;i<n;i++)
    ans=max(ans,dp[i]);

    return ans;
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
        ll i,j,n,k;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v,n,k);
    }
    return 0;
}