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
        ll n,w,i;
        bool flag=false;
        cin>>n>>w;
 
        pair<ll,ll>p[n];
 
        for(i=0;i<n;i++)
        {
            cin>>p[i].first;
            p[i].second=i+1;
        }
 
        sort(p,p+n);
        for(i=0;i<n;i++)
        {
            if(p[i].first>=(w+1)/2 and p[i].first<=w)
            {
                flag=true;
                cout<<1<<endl;
                cout<<p[i].second;
                break;
            }
        }
 
        vector<pair<ll,ll>>v;
 
        if(flag==false)
        {
            // cout<<"YES"<<endl;
            
            for(i=0;i<n;i++)
            {
                if(p[i].first<(w+1)/2)
                v.push_back(make_pair(p[i].first,p[i].second));
            }
 
            if(v.size()==0)
            {
                // cout<<"YES"<<endl;
                cout<<-1;
            }
 
            else
            {
 
                bool flag=false;
                vector<ll>a;
                ll sum=0;
                for(auto i:v)
                {
                    // cout<<i.first<<" "<<i.second<<endl;
                    sum+=i.first;
                    a.push_back(i.second);
 
                    if(sum>=(w+1)/2 and sum<=w)
                    {
                        flag=true;
                        break;
                    }
                }
 
                if(flag==true)
                {
                    cout<<a.size()<<endl;
                    for(auto i:a)
                    cout<<i<<" ";
                }
 
                else if(flag==false)
                {
                    // cout<<"YES"<<endl;
                    cout<<-1;
                }
            }
        }
 
        cout<<endl;
        
    }
    return 0;
}