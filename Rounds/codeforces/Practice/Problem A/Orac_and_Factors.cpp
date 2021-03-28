#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

ll p[1000001]={0};
ll prim[1000001]={0};

void prime(ll *p)
{
    for(ll i=3;i<1000000;i++)
    p[i]=1;

    for(ll i=3;i*i<1000000;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<1000000;j+=i)
            p[j]=0;
        }
    }

    p[0]=p[1]=0;
    p[2]=1;

}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    prime(p);

    test()
    {
        ll n,k,i,j;
        cin>>n>>k;

            if(n%2==0)
            n+=2;

            else if(n%2!=0)
            {
                for(j=3;j<1000000;j++)
                {
                    if(p[j]==1 and n%j==0)
                    {
                        n+=j;
                        break;
                    }
                }
            }

            n=n+2*(k-1);
        cout<<n<<endl;


    }
    return 0;
}