
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
        ll n,i,temp;
        cin>>n;

        if(n%4==0)
        temp=n/4;

        else
        {
            temp=n/4;
            temp++;
        }

        for(i=0;i<n-temp;i++)
        cout<<9;

        for(i=0;i<temp;i++)
        cout<<8;

        cout<<endl;
        

    
    }
    return 0;
}