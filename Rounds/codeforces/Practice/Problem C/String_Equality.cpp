
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
        ll n,k,i;
        cin>>n>>k;

        string a,b;
        cin>>a>>b;

        vector<ll>cnt1(26,0),cnt2(26,0);

        for(i=0;i<a.length();i++)
        cnt1[a[i]-'a']++;

        for(i=0;i<b.length();i++)
        cnt2[b[i]-'a']++;

        // for(auto i:cnt2)
        // cout<<i<<" ";

        // cout<<endl;

        bool flag=true;

        for(i=0;i<26;i++)
        {
            if(cnt1[i]<cnt2[i])
            {
                flag=false;
                break;
            }

            cnt1[i]=cnt1[i]-cnt2[i];

            if(cnt1[i]%k>0 or (i==25 and cnt1[i]>0))
            {
                flag=false;
                break;
            }

            if(i<=24)
            cnt1[i+1]+=cnt1[i];
        }

        if(flag==false)
        cout<<"NO"<<endl;

        else if(flag==true)
        cout<<"YES"<<endl;
    }
    return 0;
}