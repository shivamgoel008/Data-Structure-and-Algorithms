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

    void dfs_helper(T src,map<T,bool>&visited)
    {
        //recursive function that will traverse the graph
        cout<<src<<" ";
        visited[src]=true;

        // go to the neighbour of that node that is not visited

        for(auto nbr:l[src])
        {
            if(!visited[nbr])
            {
                dfs_helper(nbr,visited);
            }
        }
    }

    void dfs()
    {
        map<T,bool>visited;
        // marking all the node as not visited in the beginning 
        for (auto p:l)
        {
            T node=p.first;
            visited[node]=false;
        }

        // call the helper function 
        // iterate over all the vertices and initiate a dfs call

        int cnt=0;

        for(auto p:l)
        {
            T node=p.first;
            if(!visited[node])
            {
                cout<<"comonent: "<<cnt<<"-->";
                dfs_helper(node,visited);
                cnt++;
                cout<<endl;
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    graph<int>g;

    g.addedge(1,2);
    g.addedge(1,0);
    g.addedge(0,3);
    g.addedge(0,4);
    g.addedge(2,3);

    g.addedge(5,6);
    g.addedge(6,7);

    g.addedge(8,8);

    g.dfs();

    return 0;
}