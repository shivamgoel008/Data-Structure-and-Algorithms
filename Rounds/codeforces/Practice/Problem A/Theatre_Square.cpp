
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
    // test()
    {
        ll n,m,a,temp;
        cin>>n>>m>>a;

        if(n*m<=a*a)
        cout<<1<<endl;
        else 
        {
            // if((n*m)%(a*a)==0)
            // cout<<(n*m)/(a*a)<<endl;

            
            {
                if(n%a==0)
                n=n;

                else 
                {
                    temp=n/a;
                    temp++;
                    n=temp*a;
                }

                if(m%a==0)
                m=m;

                else 
                {
                    temp=m/a;
                    temp++;
                    m=temp*a;
                }

                // cout<<n<<" "<<m<<endl;

                cout<<(n*m)/(a*a)<<endl;
            }
        }

        
    }
    return 0;
}