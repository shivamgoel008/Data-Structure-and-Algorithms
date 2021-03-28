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
        ll n,i;
        cin>>n;

        if(n==1)
        cout<<1<<endl;

        else if(n==2)
        cout<<-1<<endl;
        else{

        vector<ll>v(n);
        double x=log2(n);

        if(round(x)==x )
        cout<<-1<<endl;

        else 
        {
            for(i=0;i<n;i++)
            {
                if(i==0)
                v[0]=2;

                else if(i==1)
                v[1]=3;

                else if(i==2)
                v[2]=1;

                else 
                v[i]=i+1;
            }

            for(i=3;i<n-1;i++)
            {
                double y=log2(v[i]);
                if(round(y)==y)
                {
                    swap(v[i],v[i+1]);
                    i=i+2;
                }
            }

            for(auto i:v)
            cout<<i<<" ";
            cout<<endl;
        }
        }

    }
    return 0;
}