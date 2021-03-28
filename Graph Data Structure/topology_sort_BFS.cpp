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
    }

    void topology_sort()
    {
        int *indegree=new int[v];

        //0 initial indegree

        for(int i=0;i<v;i++)
        indegree[i]=0;

        //update indegree by traversing eedges x->y
        // indegree[y]++

        for(int i=0;i<v;i++)

        {
            for(auto y:l[i])
            indegree[y]++;
        }

        //bfs
        // step find the nodes with 0 indegree

        queue<int>q;

        for(int i=0;i<v;i++)
        {
            if(indegree[i]==0)
            q.push(i);
        }

            //start removing elements from the queue

            while(!q.empty())
            {
                int node=q.front();
                cout<<node<<" ";
                q.pop();

                //iterate over nbrs of that and reduce their indegree by 1

                for(auto nbr: l[node])
                {
                    indegree[nbr]--;
                    if(indegree[nbr]==0)
                    q.push(nbr);
                }
            }
        
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    graph g(6);

    g.add_edge(0,2);
    g.add_edge(1,2);
    g.add_edge(1,4);
    g.add_edge(2,3);
    g.add_edge(2,5);
    g.add_edge(4,5);
    g.add_edge(3,5);

    g.topology_sort();
    return 0;
}