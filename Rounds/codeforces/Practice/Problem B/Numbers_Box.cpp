
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
        ll n,m,i,j,sum=0,negative=0,minimum=INT_MAX;
        bool flag=false;
        cin>>n>>m;

        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];

                if(a[i][j]<0)
                negative++;

                else if(a[i][j]==0)
                flag=true;

                minimum=min(abs(a[i][j]),minimum);
            }
        }

        if(flag==true or negative%2==0)
        {
            // cout<<"YES"<<negative<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                sum+=abs(a[i][j]);
            }

            cout<<sum<<endl;
        }

        else if(negative%2!=0 and flag==false )
        {
            // cout<<minimum<<endl;
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                sum+=abs(a[i][j]);
            }
            // cout<<sum<<endl;
            cout<<sum-2*minimum<<endl;
        }
    }
    return 0;
}