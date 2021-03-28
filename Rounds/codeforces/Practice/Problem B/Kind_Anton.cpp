
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

        vector<ll>a(n),b(n);
        vector<pair<ll,ll>>cnt;

        for(i=0;i<n;i++)
        cin>>a[i];

        for(i=0;i<n;i++)
        cin>>b[i];


        ll cntp=0,cntn=0;

        if(a[0]!=b[0])
        cout<<"NO"<<endl;

        else 
        {
            // cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                if(a[i]==1)
                cntp++;

                else if(a[i]==-1)
                cntn++;

                cnt.push_back(make_pair(cntp,cntn));
            }

            // for(auto i:cnt)
            // cout<<"("<<i.first<<","<<i.second<<")"<<" ";

            bool flag=true;

            for(i=1;i<n;i++)
            {
                if(b[i]>a[i])
                {
                    if(cnt[i-1].first<=0)
                    {
                        flag=false;
                        break;
                    }
                }

                else if(b[i]<a[i])
                {
                    if(cnt[i-1].second<=0)
                    {
                        flag=false;
                        break;
                    }
                }
            }

            if(flag==false)
            cout<<"NO"<<endl;

            else if(flag==true)
            cout<<"YES"<<endl;
        }
    }
    return 0;
}