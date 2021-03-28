
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
        ll n,i,a;
        bool flag=true;
        cin>>n;

        vector<ll>v;
        unordered_map<ll,ll>m;

        for(i=0;i<n;i++)
        {
            cin>>a;
            m[a]++;
            if(i==0)
            v.push_back(a);

            else 
            {
                if(a!=v.back())
                v.push_back(a);
            }
        }

        unordered_map<ll,ll>sec;

        for(i=0;i<v.size();i++)
        sec[v[i]]++;

        for(auto i:sec)
        {
            if(i.second>=2)
            {
                flag=false;
                break;
            }
        }

        unordered_map<ll,ll>freq;

        for(auto i:m)
        {
            freq[i.second]++;
        }

        for(auto i:freq)
        {
            if(i.second>=2)
            {
                flag=false;
                break;
            }
        }

        if(flag==false)
        cout<<"NO"<<endl;

        else if(flag==true)
        cout<<"YES"<<endl;
    }
    return 0;
}