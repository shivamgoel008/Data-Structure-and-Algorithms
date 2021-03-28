
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
        ll n,f,s,t,i,j,k,loop;
        bool flag=false;
        cin>>n;

            for(j=0;j<=n/5+1;j++)
            {
                for(k=0;k<=n/7+1;k++)
                {

                    if((n-(5*j+7*k))%3==0 and (n-5*j-7*k)>=0)
                    {
                        f=(n-(5*j+7*k))/3;
                        s=j;
                        t=k;
                        flag=true;
                        // cout<<(n-5*j+7*k)<<" "<<s<<" "<<t<<endl;
                        break;
                    }
                }
            }
        
        if(flag==true)
        cout<<f<<" "<<s<<" "<<t<<endl;

        else if(flag==false)
        cout<<-1<<endl;
    }
    return 0;
}