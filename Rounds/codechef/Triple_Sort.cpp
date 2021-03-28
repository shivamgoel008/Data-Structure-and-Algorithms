
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

struct trip
{
    ll x,y,z;
};

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
        ll n,i,k,j,cnt;
        cin>>n>>k;

        vector<ll>v(n),sor(n);
        vector<trip>ans;

        for(i=0;i<n;i++)
        {
            cin>>v[i];
            sor[i]=v[i];
        }

        sort(sor.begin(),sor.end());

        // cnt=0;

        for(j=0;j<k;j++)
        {
            vector<ll>index;

            cnt=0;

            for(i=0;i<n;i++)
            {
                if(v[i]!=sor[i])
                {
                    index.push_back(i);
                    cnt++;
                }
                if(cnt==3)
                break;
            }

            // for(auto u:index)
            // cout<<u<<" ";
            // cout<<endl;

            if(index.size()>=3)
            {
                // cout<<"YES"<<endl;
                if(v[index[0]]<v[index[1]] and v[index[1]]>v[index[2]])
                {
                    swap(v[index[0]],v[index[2]]);
                    swap(v[index[2]],v[index[1]]);
                    ans.push_back({index[0]+1,index[1]+1,index[2]+1});
                }
                else if(v[index[0]]>v[index[1]] and v[index[1]]>v[index[2]] and v[index[1]]<v[index[2]])
                {
                    swap(v[index[0]],v[index[2]]);
                    swap(v[index[0]],v[index[1]]);

                    ans.push_back({index[0]+1,index[1]+1,index[2]+1});
                }
                
            }

            if(is_sorted(v.begin(),v.end()))
            break;
        }

        if(is_sorted(v.begin(),v.end()))
        {
            cout<<ans.size()<<endl;
            for(i=0;i<ans.size();i++)
            {
                cout<<ans[i].x<<" "<<ans[i].y<<" "<<ans[i].z<<endl;
            }
        }

        else 
        cout<<-1<<endl;
    
    }
    return 0;
}