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
        ll n,i,j,x,sum,ans1,ans2;
        cin>>n>>x;

        vector<ll>v(n);

        for(i=0;i<n;i++)
        cin>>v[i];

        sum=accumulate(v.begin(),v.end(),0);

        if(sum%x==0)
        {
            i=0;
            while(i<n)
            {
                if(v[i]%x!=0)
                break;
                i++;
            }

            j=0;

            while(j<n-1)
            {
                if(v[n-1-j]%x!=0)
                break;
                j++;
            }

            ans1=n-i-1;
            ans2=n-j-1;
            if(i==n)
            cout<<"-1"<<endl;

            else 
            cout<<max(ans1,ans2)<<endl;
        }

        else if(sum%x!=0)
        cout<<n<<endl;
    }
    return 0;
}