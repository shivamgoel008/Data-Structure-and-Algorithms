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

bool compare(ll a,ll b)
{
    return a<b;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        double x;
        int n;
        cin>>x>>n;

        long long int temp=n;
        double ans=1;

        if(n<0)
        temp=temp*-1;

        cout<<temp<<endl;

        while(temp>0)
        {
            if(temp%2==0)
            {
                x=x*x;
                temp=temp/2;
            }

            else 
            {
                ans=ans*x;
                temp--;
            }
        }
        cout<<ans<<endl;

        if(n<0)
        {
            ans=1/ans;
        }

        cout<<ans<<endl;
    }
    return 0;
}