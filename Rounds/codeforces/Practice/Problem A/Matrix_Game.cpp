
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
        ll n,m,i,j,cntr=0,cntc=0;
        cin>>n>>m;
        
        ll a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>a[i][j];
        }

        for(i=0;i<n;i++)
        {
            bool flag=true;
            for(j=0;j<m;j++)
            {
                if(a[i][j]==1)
                flag=false;
            }
            if(flag==true)
            cntr++;

            else if(flag==false)
            flag=true;
        }

        for(i=0;i<m;i++)
        {
            bool flag=true;
            for(j=0;j<n;j++)
            {
                if(a[j][i]==1)
                flag=false;
            }

            if(flag==true)
            cntc++;

            else 
            flag=true;
        }

        if(min(cntr,cntc)%2==0)
        cout<<"Vivek"<<endl;

        else 
        cout<<"Ashish"<<endl;


    }
    return 0;
}