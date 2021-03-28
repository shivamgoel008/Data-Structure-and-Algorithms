
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
// #define mp make_pair
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
        ll n,i,j;
        bool flag=true;
        cin>>n;

        vector<ll>a(n),b(n);
        map<ll,ll>mp,mpa,mpb;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            mpa[a[i]]++;
        }

        for(i=0;i<n;i++)
        {
            cin>>b[i];
            mp[b[i]]++;
            mpb[b[i]]++;
        }

        // check if any element is present odd number of times 

        for(auto i:mp)
        {
            if(i.second%2!=0)
            {
                flag=false;
                break;
            }
        }

        if(flag==false)
        {
            cout<<-1<<endl;

            continue;
        }

        else
        {
            // removing common elemets from the map 
            for(auto i:mpa)
            {
                if(mpb.find(i.first)!=mpb.end())
                {
                    ll minimum=min(i.second,mpb[i.first]);
                    mpa[i.first]-=minimum;
                    mpb[i.first]-=minimum;
                }
            }

            vector<ll>v1,v2;

            // making the resulting array A
            for(auto i:mpa)
            {
                for(j=0;j<i.second/2;j++)
                v1.push_back(i.first);
            }

            // making the resulting array B
            for(auto i:mpb)
            {
                for(j=0;j<i.second/2;j++)
                v2.push_back(i.first);
            }

            // cout<<"NO"<<endl;

            // sorting the array A in accending order and B in decending order 
            // sort(v1.begin(),v1.end());
            // sort(v2.begin(),v2.end(),compare);


            // array A is already in acending order and to make array B dcending we reverse the array B

            reverse(v2.begin(),v2.end());
            // cout<<"NO"<<endl;
            ll ans=0;
            ll minimum=INT_MAX;

            // for(auto i:v1)
            // minimum=min(minimum,i);

            // for(auto i:v2)
            // minimum=min(minimum,i);

            for(auto i:mp)
            minimum=min(minimum,i.first);
            
            for(i=0;i<v1.size();i++)
            ans+=min(2*minimum,min(v1[i],v2[i]));

            cout<<ans<<endl;
            
        }
    }
    return 0;
}