
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
        ll k,x,i;
        cin>>k>>x;

        ll fact=1;
        vector<ll>v;

        while(x%2==0)
        {
            fact=fact*2;
            x=x/2;
        }

        if(fact>1)
        v.push_back(fact);

        for(i=3;i<=sqrt(x);i+=2)
        {
            fact=1;

            while(x%i==0)
            {
                fact=fact*i;
                x=x/i;
            }

            if(fact>1)
            v.push_back(fact);
        }

        if(x>2)
        v.push_back(x);

        // for(auto i:v)
        // cout<<i<<" ";

        if(k==v.size())
        {
            ll sum=0;
            sum=accumulate(v.begin(),v.end(),0);
            cout<<sum;
            cout<<endl;
        }

        else if(k>v.size())
        {
            ll loop=k-v.size();
            ll sum=0;
            sum=accumulate(v.begin(),v.end(),0)+loop;
            cout<<sum;
            cout<<endl;
        }

        else if(k<v.size())
        {
            while(1)
            {
                sort(v.begin(),v.end(),compare);

                // for(auto i:v)
                // cout<<i<<" ";
                // cout<<endl;
                ll push=v[v.size()-1]*v[v.size()-2];
                v.pop_back();
                v.pop_back();
                v.push_back(push);

                if(v.size()==k)
                break;
            }

            ll sum=0;
            sum=accumulate(v.begin(),v.end(),0);
            cout<<sum;
            cout<<endl;
        }
    }
    return 0;
}