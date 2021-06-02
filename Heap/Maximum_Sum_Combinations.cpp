#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}

vector<int> solve(vector<int>a,vector<int>b,int c)
{
    // cout<<c<<endl;
    priority_queue<int,vector<int>,greater<int>>pq;

    while(!pq.empty())
    pq.pop();

    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());

    // cout<<a.size()<<" "<<b.size()<<endl;

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            int temp=a[i]+b[j];
            // cout<<pq.size()<<endl;
            if(pq.size()<c)
            {
                pq.push(temp);
            }

            else 
            {
                if(pq.top()<temp)
                {
                    pq.pop();
                    pq.push(temp);
                }

                else 
                break;
            }
        }
    }

    vector<int>ans(c);
    int k=c-1;
    while(!pq.empty())
    {
        ans[k]=pq.top();
        k--;
        pq.pop();
    }

    return ans;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);  
    // test()
    {
        ll i,j,n;
        cin>>n;

        // cout<<n<<endl;

        vector<int>a(n);
        vector<int>b(n);

        for(i=0;i<n;i++)
        cin>>a[i];

        // for(i=0;i<n;i++)
        // cout<<a[i]<<endl;

        for(i=0;i<n;i++)
        cin>>b[i];

        int c;
        cin>>c;


        vector<int>ans=solve(a,b,c);

        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}