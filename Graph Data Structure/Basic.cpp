#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1000000007
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

/* Think More, Code Less */
/* Soch bo*dk Soch */

bool compare(ll a,ll b)
{
    return a<b;
}


// unweighted graph 
class Graph
{
    int v;
    list<int> *l;
    
public:
    Graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }

    void addEdge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList()
    {
        for(int i=0;i<v;i++)
        {
            cout<<"Vertex "<<i<<" ";
            for(auto j:l[i])
            {
                cout<<j<<" ";
            }

            cout<<endl;
        }
    }

    void BFS(int source,int dest=-1)
    {
        queue<int>q;

        bool*visited=new bool [v]{0};
        int *dist=new int[v]{0};
        int *parent=new int[v]{0};

        q.push(source);
        visited[source]=true;
        parent[source]=source;
        dist[source]=0;

        while(!q.empty())
        {
            int f=q.front();
            cout<<f<<" ";
            q.pop();
            for(auto i:l[f])
            {
                if(!visited[i])
                {
                    q.push(i);
                    parent[i]=f;
                    dist[i]=dist[f]+1;
                    visited[i]=true;
                }
            }
        }
        cout<<endl;

        // single source shortest path algorithm (SSSP)

        for(int i=0;i<v;i++)
        {
            cout<<"SHortest Path to "<<i<<" is "<<dist[i]<<endl;
        }
        cout<<endl;

        // path from a point A to source

        if(dest!=-1)
        {
            int temp=dest;
            while(temp!=source)
            {
                cout<<temp<<"--";
                temp=parent[temp];
            }
            cout<<source<<endl;
        }
    }

    void dfSHelper(int node,bool*visited)
    {
        visited[node]=true;
        cout<<node<<" ";
        for(int nbr:l[node])
        {
            if(!visited[nbr])
            dfSHelper(nbr,visited);
        }

        return;
    }

    void dfs(int source)
    {
        bool*visited=new bool[v]{0};
        dfSHelper(source,visited);
    }
};

// weighted graph 

class weightedGraph
{
    map<string,list<pair<string,int>>>l;
public: 
    void addWeightedEdge(string a,string b, bool bidir, int weight)
    {
        l[a].push_back(make_pair(b,weight));
        if(bidir)
        l[b].push_back(make_pair(a,weight));
    }

    void printWeightedGraph()
    {
        for(auto i:l)
        {
            cout<<"vertex: "<<i.first<<" ";
            for(auto j:i.second)
            {
                cout<<"("<<j.first<<", "<<j.second<<") ";
            }
        }
    }
};

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()
    {
        Graph g(7);

        g.addEdge(0,1);
        g.addEdge(1,2);
        g.addEdge(3,5);
        g.addEdge(2,3);
        g.addEdge(5,6);
        g.addEdge(4,5);
        g.addEdge(0,4);
        g.addEdge(3,4);

        g.printAdjList();

        cout<<endl;

        g.BFS(1,6);

        g.dfs(1);

        weightedGraph gw;

        gw.addWeightedEdge("A","B",true,20);
        gw.addWeightedEdge("B","D",true,40);
        gw.addWeightedEdge("A","C",true,10);
        gw.addWeightedEdge("C","D",true,40);
        gw.addWeightedEdge("A","D",false,50);

        gw.printWeightedGraph();        
    }
    return 0;
}