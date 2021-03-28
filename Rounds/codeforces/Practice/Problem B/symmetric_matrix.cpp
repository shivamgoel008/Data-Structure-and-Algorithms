#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)\

ll check(ll a,ll b,ll c,ll d)
{
    if((b==c) or (a==d and b==c))
    return 1;

    else 
    return 0;
}

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
        ll n,m,k,i,j;
        cin>>n>>m;

        bool flag=false;

        if(m%2!=0)
        {
            ll a[2][2];
            for(k=0;k<n;k++)
            {
                ll a,b,c,d;
                cin>>a>>b>>c>>d;
            }
            cout<<"NO"<<endl;
            
        }
        
        else if(m%2==0)
        {
            ll a[2][2];
            for(k=0;k<n;k++)
            {
                ll a,b,c,d;
                cin>>a>>b>>c>>d;
                if(check(a,b,c,d)==1)
                flag=true;
            }
             if(flag==true)
            cout<<"YES"<<endl;

            else if(flag==false)
            cout<<"NO"<<endl;
        }

       
    }
    return 0;
}