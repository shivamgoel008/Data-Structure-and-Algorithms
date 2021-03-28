
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
        ll n,c0,c1,h,cnt0=0,cnt1=0,i;
        cin>>n>>c0>>c1>>h;

        string s;
        cin>>s;

        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            cnt0++;

            else 
            cnt1++;
        }

        cout<<min(cnt0*c0+cnt1*c1,min(cnt0*h+(cnt0+cnt1)*c1,cnt1*h+(cnt0+cnt1)*c0))<<endl;
        
    }
    return 0;
}