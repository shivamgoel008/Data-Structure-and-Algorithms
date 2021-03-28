
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
        ll n,a,b,i,j,remaining;
        cin>>n>>a>>b;

        string ans,start;

        ll loop=n/b;

        for(j=0;j<loop;j++)
        {
            for(i=0;i<b;i++)
            start.push_back('a'+i);
        }
        // cout<<start<<endl; 

        remaining =n%b;

        for(i=0;i<remaining;i++)
        start.push_back('a'+i);

        cout<<start<<endl;
    }
    return 0;
}