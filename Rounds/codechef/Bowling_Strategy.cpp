
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
        ll n,k,b,play,i,cnt;
        cin>>n>>k>>b;

        if(k==1 and n>1)
        cout<<-1;

        else if(n%b==0)
        {
            play=n/b;
            if(play>k)
            cout<<-1;

            else 
            {
                cnt=1;
                for(i=0;i<n;i++)
                {
                    cout<<cnt<<" ";
                    if(cnt==k)
                    cnt=1;

                    else 
                    cnt++;
                }

            }
        }

        else if(n%b!=0)
        {
            play=n/b;
            play++;

            if(play>k)
            cout<<-1;

            else 
            {
                cnt=1;
                for(i=0;i<n;i++)
                {
                    cout<<cnt<<" ";
                    if(cnt==k)
                    cnt=1;

                    else 
                    cnt++;
                }
            }
        }

        cout<<endl;
        
    }
    return 0;
}