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
        ll a,b,cnt,div;
        cin>>a>>b;

        if(a==b)
        cout<<0<<endl;

        else if(a<b)
        {
            
            if(b%a==0)
            {
                div=b/a;
                cnt=0;
                while(div%2==0)
                {
                    cnt++;
                    div=div/2;
                }

                if(div!=1)
                cout<<-1<<endl;

                else if(div==1)
                {
                    if(cnt%3==0)
                    cout<<cnt/3<<endl;

                    else
                    cout<<cnt/3+1<<endl;
                }
            }
            else 
            cout<<-1<<endl;
        }

        else if(a>b)
        {
            if(a%b==0)
            {
                div=a/b;
                cnt=0;
                while(div%2==0)
                {
                    cnt++;
                    div=div/2;
                }

                if(div!=1)
                cout<<-1<<endl;

                else if(div==1)
                {
                    if(cnt%3==0)
                    cout<<cnt/3<<endl;

                    else
                    cout<<cnt/3+1<<endl;
                }
            }
            else 
            cout<<-1<<endl;
        }
    }
    return 0;
}