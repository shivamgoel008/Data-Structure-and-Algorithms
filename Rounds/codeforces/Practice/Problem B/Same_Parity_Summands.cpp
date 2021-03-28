
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
        ll n,k,i;
        cin>>n>>k;

        bool flag=false;

        if((n-(k-1))%2!=0 and (n-(k-1))>0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)
            cout<<1<<" ";
            cout<<n-(k-1)<<" "<<endl;
        }

        else if((n-2*(k-1))%2==0 and (n-2*(k-1))>0)
        {
            cout<<"YES"<<endl;
            for(i=0;i<k-1;i++)
            cout<<2<<" ";
            cout<<n-2*(k-1)<<" "<<endl;
        }

        else 
        cout<<"NO"<<endl;

        
    }
    return 0;
}