
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
        ll a[6]={0},i,p,sum=0;
        bool flag=false;

        for(i=0;i<5;i++)
        cin>>a[i];

        cin>>p;

        for(i=0;i<5;i++)
        a[i]=a[i]*p;

        for(i=0;i<5;i++)
        {
            if(i==0)
            {
                if(a[i]>24)
                a[i+1]+=a[i]-24;
            }

            else if(i>0 and i<4)
            {
                if(a[i]>24)
                a[i+1]+=a[i]-24;

                else if(a[i]<24)
                a[i+1]=a[i+1]-24+a[i];
            }

            else if(i==4)
            {
                if(a[i]<=24)
                {
                    flag=true;
                }
            }
        }

        // for(i=0;i<5;i++)
        // cout<<a[i]<<" ";
        // cout<<endl;

        if((flag==true))
        cout<<"No"<<endl;

        else 
        cout<<"Yes"<<endl;
    }
    return 0;
}