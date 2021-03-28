
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll p=29;
ll has[100005];
ll power[100005];

void generate_hash(string s)
{
    has[0]=s[0]-'a'+1;
    power[0]=1;

    for(ll i=1;i<s.size();i++)
    {
        power[i]=((power[i-1]%MOD)*(p%MOD))%MOD;
        has[i]=(has[i-1]%MOD+((s[i]-'a'+1)%MOD*(power[i]%MOD))%MOD)%MOD;
    }
}


ll get_hash(ll l,ll r)
{
    if(l==0)
    return has[r]%MOD;

    else 
    return (abs(has[r]-has[l-1]+MOD))%MOD;
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
        string s;
        cin>>s;

        ll cnt=0,i;

        generate_hash(s);

        for(i=1;i<s.size()-1;i+=2)
        {
            ll idx1=i/2;
            ll idx2=(s.size()+i)/2;

            bool c1=(get_hash(0,idx1)*power[idx1+1])%MOD==get_hash(idx1+1,i);
            bool c2=(get_hash(i+1,idx2)*power[idx2-i])%MOD==get_hash(idx2+1,s.size()-1);

            if(c1 and c2)
            cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}