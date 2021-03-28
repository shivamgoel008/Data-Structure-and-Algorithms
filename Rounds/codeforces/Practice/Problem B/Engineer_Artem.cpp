
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
        ll n,m,i,j;
        cin>>n>>m;

        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
        }
        ll cnt;

        if(m%2!=0)
        {
            cnt=0;
            for(i=0;i<n;i++)
            {
                for (j=0;j<m;j++)
                {
                    if(cnt%2==0)
                    {
                        if(a[i][j]%2!=0) 
                        a[i][j]++;
                    }

                    else 
                    {
                        if(a[i][j]%2==0)
                        a[i][j]++;
                    }

                    cnt++;
                }
            }
        }

        else 
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cnt=0;
                    for(j=0;j<n;j++)
                    {
                        if(cnt%2==0)
                        {
                            if(a[i][j]%2!=0) 
                            a[i][j]++;
                        }

                        else 
                        {
                            if(a[i][j]%2==0)
                            a[i][j]++;
                        }

                        cnt++;
                    }
                }

                else 
                {
                    cnt=1;
                    for(j=0;j<m;j++)
                    {
                        if(cnt%2==0)
                        {
                            if(a[i][j]%2!=0) 
                            a[i][j]++;
                        }

                        else 
                        {
                            if(a[i][j]%2==0)
                            a[i][j]++;
                        }
                        cnt++;
                    }
                }
            }
        }

        


        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}