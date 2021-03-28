
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
        ll n,i,sum=0,sum1=0,sum2=0;
        cin>>n;

        vector<ll>a(n),b(n);

        for(i=0;i<n;i++)
        cin>>a[i];

        for(i=0;i<n;i++)
        cin>>b[i];

        for(i=0;i<n;i++)
        {
            sum1+=a[i];
            sum2+=b[i];
            if(a[i]==b[i] and sum1==sum2)
            sum+=a[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}