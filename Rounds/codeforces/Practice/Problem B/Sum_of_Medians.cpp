
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll n,k,sum=0,cnt=0,start,i;
        cin>>n>>k;
        
        vector<ll>v(n*k);

        for(i=0;i<n*k;i++)
        cin>>v[i];

        if(n==2)
        {
            for(i=0;i<n*k;i+=2)
            {
                // cout<<v[i]<<" ";
                sum+=v[i];
        
            }
        }

        else if(n%2==0)
        {
            ll jump=n/2,cnt=0;
            jump--;

            jump=n-jump;

            ll start=n*k-jump;

            for(i=start;i>=0;i=i-jump)
            {
                // cout<<v[i]<<" ";
                sum+=v[i];
                cnt++;
                if(cnt==k)
                break;
            }
        }

        else if(n%2!=0)
        {
            ll jump=n/2;

            jump++;

            start=n*k-jump;

            for(i=start;i>=0;i=i-jump)
            {
                // cout<<v[i]<<" ";
                sum+=v[i];
                cnt++;

                if(cnt==k)
                break;
            } 
        }
        // cout<<endl;

        cout<<sum<<endl;
    }
    return 0;
}