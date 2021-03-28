
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
        ll n,ans,i;
        cin>>n;


        for(i=n;i>=1;i--)
        {
            if(i==n)
            {
                ans=(2*i-1)/2;
                ans++;
                i--;
            }

            else 
            {
                // cout<<"fuck"<<endl;
                if((i+ans)%2==0)
                ans=(i+ans)/2;

                else if((i+ans)%2!=0)
                {
                    ans=(i+ans)/2;
                    ans++;
                }
            }
        }

        cout<<ans<<endl;

        

        for(i=n;i>=1;i--)
        {
            if(i==n)
            {
                cout<<i<<" "<<i-1<<endl;
                ans=(2*i-1)/2;
                ans++;
                i--;
            }

            else 
            {
                // cout<<"FUCK"<<endl;
                cout<<i<<" "<<ans<<endl;
                if((i+ans)%2==0)
                ans=(i+ans)/2;

                else 
                {
                    // cout<<i<<" "<<ans<<endl;
                    ans=(i+ans)/2;
                    ans++;
                }
            }

        }
    }
    return 0;
}