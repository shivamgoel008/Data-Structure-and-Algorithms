#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

class graph
{
    list<int>*l;
    int v;
public:
    graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }

    void add_edge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool is_tree()
    {
        bool *visited=new bool[v];
        int *parent=new int[v];

        queue<int>q;

        for(int i=0;i<v;i++)
        {
            visited[i]=false;
            parent[i]=i;
        }

        int src=0;

        q.push(src);
        visited[src]=true;

        while(!q.empty())
        {
            int node=q.front();
            q.pop();

            for(int nbr:l[node])
            {
                if(visited[nbr]==true and parent[node]!=nbr)
                return false;

                else if (!visited[nbr])
                {
                    visited[nbr]=true;
                    parent[nbr]=node;
                    q.push(nbr);
                }
            }
        }
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    graph g(4);

    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(2,3);
    g.add_edge(1,3);

    if(g.is_tree())
    cout<<"yes it is tree"<<endl;

    else
    cout<<"NO"<<endl;

    return 0;
}