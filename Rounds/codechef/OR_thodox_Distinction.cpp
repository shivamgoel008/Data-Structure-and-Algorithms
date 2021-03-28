
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
        ll n,ans,i,j;
        cin>>n;

        vector<ll>v(n);
        unordered_map<ll,ll>m;

        for(i=0;i<n;i++)
        cin>>v[i];

        for(i=0;i<n;i++)
        {
            ans=0;
            for(j=i;j<n;j++)
            {
                ans=ans^v[j];
                m[ans]++;
            }
        }
        
        bool flag=true;

        for(auto i:m)
        {
            if(i.second>=2)
            {
                flag=false;
                break;
            }
        }

        if(flag==false)
        cout<<"NO"<<endl;

        else 
        cout<<"YES"<<endl;
    }
    return 0;
}