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
    
    void addedge(string x,string y)
    {
        l[x].pb(y);
        //l[y].pb(x);
    }

    void dfs_helper(T src,map<T,bool>&visited,list<T>&ordering)
    {
        //recursive function that will traverse the graph
        visited[src]=true;

        // go to the neighbour of that node that is not visited

        for(auto nbr:l[src])
        {
            if(!visited[nbr])
            {
                dfs_helper(nbr,visited,ordering);
            }
        }

        // at this point 
        ordering.push_front(src);
        return;
    }

    void dfs()
    {
        map<T,bool>visited;
        list<T>ordering;
        // marking all the node as not visited in the beginning 
        for (auto p:l)
        {
            T node=p.first;
            visited[node]=false;
        }

        // call the helper function
        for(auto p:l)
        {
            T node=p.first;
            if(!visited[node])
            {
                dfs_helper(node,visited,ordering);
            }
        }

        // finally or print the list
        for(auto node:ordering)
        cout<<node<<endl;
    }
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    graph<string>g;

    g.addedge("python","data preprocessing");
    g.addedge("python","pytorch");
    g.addedge("python","ML");
    g.addedge("data preprocessing","ML");
    g.addedge("pytorch","DL");
    g.addedge("ML","DL");
    g.addedge("DL","face recog");
    g.addedge("data set","face recog");

    g.dfs();
    return 0;
}