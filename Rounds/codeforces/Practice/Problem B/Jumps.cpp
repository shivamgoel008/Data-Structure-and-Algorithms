
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
        ll n,flag,ans,i;
        cin>>n;

        for(i=1;i<100000;i++)
        {
            if((i*(i+1))/2>=n)
            {
                ans=i;
                break;
            }
        }


        if((i*(i+1))/2==n)
        cout<<i<<endl;

        else 
        {
            if(n== (i*(i+1))/2-1)
            {
                cout<<i+1<<endl;
            }

            else 
            cout<<i<<endl;
        }
        
    }
    return 0;
}