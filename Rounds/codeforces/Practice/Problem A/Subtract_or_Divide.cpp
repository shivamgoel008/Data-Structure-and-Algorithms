
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
        ll n;
        cin>>n;

        if(n==1)
        cout<<0<<endl;

        else if(n==2)
        cout<<1<<endl;

        else if(n==3)
        cout<<2<<endl;

        else
        {
            if(n%2==0)
            cout<<2<<endl;

            else 
            cout<<3<<endl;
        }
    }
    return 0;
}