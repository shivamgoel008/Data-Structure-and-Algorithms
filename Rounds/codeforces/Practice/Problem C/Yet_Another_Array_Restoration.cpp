
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
        ll x,y,n,i;
        cin>>n>>x>>y;

        if(abs(x-y)%(n-1)==0)
        {
            ll d=abs(x-y)/(n-1);
            for(i=0;i<n;i++)
            {
                cout<<x<<" ";
                x=x+d;
            }

            cout<<endl;
        }

        else
        {
            ll divisor=n-1;
            while(1)
            {
                if(abs(x-y)%divisor==0)
                break;

                else 
                divisor--;
            }

            ll d=abs(x-y)/divisor;

            ll start =x;

            ll cnt=0;

            while(start<=y)
            {
                cout<<start<<" ";
                start+=d;
                cnt++;
            }

            if(cnt<n)
            {
                while(x-d>0)
                {
                    cout<<x-d<<" ";
                    x=x-d;
                    cnt++;
                    if(cnt==n)
                    break;
                }
            }

            if(cnt<n)
            {
                while(cnt<n)
                {
                    cout<<y+d<<" ";
                    y=y+d;
                    cnt++;
                }

            }

            cout<<endl;

        }
        
    }
    return 0;
}