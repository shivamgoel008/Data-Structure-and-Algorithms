
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
        ll x,n,m;
        cin>>x>>n>>m;
        
        while(n>0)
        {
            if(x>20)
            {
                x=x/2+10;
            }

            n--;
            if(x<=20)
            break;
        }

        // cout<<x<<" ";

        while(m>0)
        {
            x=x-10;
            m--;
        }

        // cout<<x<<endl;

        if(x<=0)
        cout<<"YES"<<endl;

        else 
        cout<<"NO"<<endl;

    }
    return 0;
}