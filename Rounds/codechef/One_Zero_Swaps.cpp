
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
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
        string a,b;
        cin>>a>>b;

        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            cnt++;
        }

        if(cnt%2==0)
        cout<<"Yes"<<endl;

        else if(cnt%2!=0)
        cout<<"No"<<endl;
        
    }
    return 0;
}