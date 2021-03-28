#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

template<typename T>

class graph
{
    map<T,list<T>>l;
public:
    
    void addedge(int x,int y)
    {
        l[x].pb(y);
    }

    ll BFS(T src,T dest)
    {
        map<T,int>dis;
        queue<T>q;

        for(ll i=1;i<=dest;i++)
        {
            dis[i]=INT_MAX;
        }

        q.push(src);
        dis[src]=0;

        while(!q.empty())
        {
            T node =q.front();
            q.pop();
            //cout<<node<<" ";
            for(auto i:l[node])
            {
                if(dis[i]==INT_MAX)
                {
                    q.push(i);
                    dis[i]=dis[node]+1;
                }
            }
        }

        // for(auto node_pair:l)
        // {
        //     T node=node_pair.first;
        //     int d=dis[node];
        //     //cout<<"Node "<<node<<" Distance from source "<<d<<endl;
        // }

        return dis[dest];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll cell,a,b,i;
        cin>>cell>>a>>b;
        ll board[cell+1]={};

        for(i=0;i<a+b;i++)
        {
            ll e,f;
            cin>>e>>f;

            board[e]=f-e;
        }

        graph<int>g;
        for(i=1;i<cell+1;i++)
        {
            for(ll dice=1;dice<=6;dice++)
            {
                int j=i+dice;
                j+=board[j];

                if(j<=cell)
                {
                    g.addedge(i,j);
                }
            }
        }
        cout<<g.BFS(1,cell)<<endl;
    }
    return 0;
}