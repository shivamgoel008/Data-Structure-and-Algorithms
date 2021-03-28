
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a>b;
}



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
        ll n,i,ans,k,cnt,temp,minimum;
        cin>>n;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];
        
        // taking one element at a time
        if(n==1)
        {
            ans=v[0];
        }

        else if(n==2)
        {
            ans=max(v[0],v[1]);
        }

        else if(n==3)
        {
            sort(v.begin(),v.end());

            if(v[0]+v[1]>v[2])
            ans=v[0]+v[1];

            else 
            ans=v[2];
        }

        else if(n==4)
        {
            sort(v.begin(),v.end(),compare);
            ll burner1=0,burner2=0;
            for(i=0;i<n;i++)
            {
                if(burner1==burner2)
                burner2+=v[i];

                else if(burner2>burner1)
                {
                    burner1+=v[i];
                }

                else if(burner1>burner2)
                {
                    burner2+=v[i];
                }
            }

            if(burner2>=burner1)
            ans=burner2;

            else 
            ans=burner1;
        }

        cout<<ans<<endl;

    }
    return 0;
}