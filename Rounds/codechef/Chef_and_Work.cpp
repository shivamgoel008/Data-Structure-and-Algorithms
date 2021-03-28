
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
        ll n,i,k;
        bool flag=true;
        cin>>n>>k;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        {
            ll a;
            cin>>a;

            if(a>k)
            flag=false;

            v[i]=a;
        }

        // sort(v.begin(),v.end());

        // for(auto i:v)
        // cout<<i.first<<" "<<i.second<<endl;

        if(flag==false)
        cout<<-1<<endl;

        else if(flag==true)
        {
            ll sum=0;
            ll cnt=0;
            for(i=0;i<n;i++)
            {
                if(sum+v[i]<=k)
                sum+=v[i];

                else 
                {
                    sum=v[i];
                    cnt++;
                }
            }

            
            cnt++;
            cout<<cnt<<endl;
        }


        
    }
    return 0;
}