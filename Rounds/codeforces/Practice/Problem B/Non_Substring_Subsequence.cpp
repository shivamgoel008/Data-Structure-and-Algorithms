
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
        ll n,q,i,j;
        
        cin>>n>>q;

        string s;
        cin>>s;

        for(i=0;i<q;i++)
        {
            bool flag=false;
            ll a,b;
            cin>>a>>b;

            if(abs(a-b)>=1)
            {
                for(j=b;j<n;j++)
                {
                    if(s[b-1]==s[j])
                    {
                        flag=true;
                        break;
                    }
                }

                if(flag==false)
                {
                    for(j=a-2;j>=0;j--)
                    {
                        if(s[a-1]==s[j])
                        flag=true;
                    }
                }
            }

            if(flag==false)
            cout<<"NO"<<endl;

            else 
            cout<<"YES"<<endl;
        }
    }
    return 0;
}