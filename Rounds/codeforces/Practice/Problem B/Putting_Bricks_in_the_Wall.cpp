
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
        ll n,i,j;
        cin>>n;

        char a[n][n];

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cin>>a[i][j];
        }

        if(((a[0][1]=='0' and a[1][0]=='0') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='1')) or ((a[0][1]=='1' and a[1][0]=='1') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='0')))
        cout<<0<<endl;

        else if((a[0][1]=='1' and a[1][0]=='0') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='1'))
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='0') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='0'))
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='0') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='0'))
        {
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='0') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='1'))
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }

        
        else if((a[0][1]=='0' and a[1][0]=='1') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='1'))
        {
            cout<<2<<endl;
            cout<<2<<" "<<1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }

        else if((a[0][1]=='0' and a[1][0]=='1') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='0'))
        {
            cout<<2<<endl;
            cout<<2<<" "<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }

        else if((a[0][1]=='0' and a[1][0]=='1') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='0'))
        {
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
        }

        else if((a[0][1]=='0' and a[1][0]=='1') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='1'))
        {
            cout<<1<<endl;
            cout<<2<<" "<<1<<endl;
        }

        else if ((a[0][1]=='0' and a[1][0]=='0') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='0'))
        {
            cout<<1<<endl;
            cout<<n<<" "<<n-1<<endl;
        }

        else if((a[0][1]=='0' and a[1][0]=='0') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='1'))
        {
            cout<<1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }

        else if((a[0][1]=='0' and a[1][0]=='0') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='0'))
        {
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n<<" "<<n-1<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='1') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='0'))
        {
            cout<<1<<endl;
            cout<<n-1<<" "<<n<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='1') and (a[n-2][n-1]=='0' and a[n-1][n-2]=='1'))
        {
            cout<<1<<endl;
            cout<<n<<" "<<n-1<<endl;
        }

        else if((a[0][1]=='1' and a[1][0]=='1') and (a[n-2][n-1]=='1' and a[n-1][n-2]=='1'))
        {
            cout<<2<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
    }
    return 0;
}