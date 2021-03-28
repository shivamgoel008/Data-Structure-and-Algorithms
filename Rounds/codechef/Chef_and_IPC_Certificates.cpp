
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
    // test()
    {
        ll n,m,k,q,cnt=0,i,j,sum;
        cin>>n>>m>>k;

        vector<ll>v(k);

        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<k;j++)
            {
                cin>>v[i];
                sum+=v[i];
            }
            cin>>q;

            if(sum>=m and q<=10)
            cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}