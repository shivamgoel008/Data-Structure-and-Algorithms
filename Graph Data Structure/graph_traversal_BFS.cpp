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
        l[y].pb(x);
    }

    void BFS(T src)
    {
        map<T,int>visited;
        queue<T>q;

        q.push(src);
        visited[src]=true;

        while(!q.empty())
        {
            T node =q.front();
            q.pop();
            cout<<node<<" ";
            for(auto i:l[node])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        graph<int>g;
        g.addedge(0,1);
        g.addedge(1,2);
        g.addedge(2,3);
        g.addedge(3,4);
        g.addedge(4,5);

        g.BFS(0);
    
    return 0;
}