
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
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;

        ll tempa=a,tempb=b,tempn=n;

        
        ll first=abs(a-x);
        if(first>=n)
        {
            a=a-n;
        }
            

        else 
        {
            a=a-first;
            n=n-first;
            if(abs(b-y)>=n)
            b=b-n;

            else 
            b=b-abs(b-y);
        }

        // cout<<a<<" "<<b<<endl;

        first=a*b;
        // cout<<tempa<<" "<<tempb<<" "<<tempn<<endl;
        ll second;
        if(abs(tempb-y)>=tempn)
        tempb=tempb-tempn;

        else 
        {
            second=abs(tempb-y);
            tempb=tempb-abs(tempb-y);
            tempn=tempn-second;
            // cout<<tempb<<" "<<tempn<<endl;
            if(abs(tempa-x)>=tempn)
            tempa=tempa-tempn;

            else 
            tempa=tempa-abs(tempa-x);
        }

        // cout<<tempa<<" "<<tempb<<endl;
        second=tempa*tempb;

        cout<<min(first,second)<<endl;
        
        
    }
    return 0;
}