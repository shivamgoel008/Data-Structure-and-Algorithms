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
        ll n,i,cnt=0;
        cin>>n;

        string s=to_string(n);

        vector<ll>v;
        ll len=s.length();

        for(i=0;i<len;i++)
        {
            if(s[i]!='0')
            {
                ll num=s[i]-'0';
                v.push_back(num*pow(10,len-i-1));
            }
        }

        cout<<v.size()<<endl;
        for(auto i:v)
        cout<<i<<" ";

        cout<<endl;
    }
    return 0;
}