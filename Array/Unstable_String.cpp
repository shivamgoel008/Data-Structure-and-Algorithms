#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
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
        ll i,j,n;
        string s;
        cin>>s;

        // cout<<s<<endl;

        string fir,sec;

        n=s.length();

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            fir.push_back('0');

            else if(i%2!=0)
            fir.push_back('1');
        }

        // cout<<fir<<endl;

        for(i=0;i<n;i++)
        {
            if(i%2==0)
            sec.push_back('1');

            else 
            sec.push_back('0');
        }

        // cout<<fir<<" "<<sec<<endl;
        ll sum=0;

        for(i=0;i<n;i++)
        {
            if(s[i]!=fir[i])
            {
                // cout<<"YES"<<endl;
                // cout<<s[i]<<" "<<fir[i]<<endl;
                if(s[i]=='?')
                {}

                else 
                {
                    // cout<<"YES"<<endl;
                    // cout<<i<<endl;
                    sum+=(i)*(i+1)/2;
                }
            }
        }

        if(sum==0)
        {
            sum+=n*(n+1)/2;
        }

        ll ssum=0;

        for(i=0;i<n;i++)
        {
            if(s[i]!=sec[i])
            {
                if(s[i]=='?')
                {}

                else 
                {
                    ssum+=(i)*(i+1)/2;
                }
            }
        }

        cout<<max(sum,ssum)<<endl;
    }
    return 0;
}