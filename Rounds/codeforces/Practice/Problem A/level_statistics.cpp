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
        ll n,i;
        cin>>n;

        vector<ll>p(n);
        vector<ll>c(n);

        bool flag=true;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                cin>>p[i]>>c[i];
                if(p[i]<c[i])
                flag=false;
            }

            else if(i>0)
            {
                cin>>p[i]>>c[i];
                if(p[i]<p[i-1] or c[i]<c[i-1] or p[i]<c[i])
                flag=false;
            }
        }

        if(flag==false)
        cout<<"NO"<<endl;

        else if(flag==true)
        cout<<"YES"<<endl;
    }
    return 0;
}