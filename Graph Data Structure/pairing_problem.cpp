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
    int v;
    list<pair<int,int>>l;

public:
    
    graph(int v)
    {
        this->v=v;
    }

    void add_edge(int u,int v)
    {
        l.push_back(make_pair(u,v));
    }

    // optimised find function 
    int find_set(int i,int *parent)
    {
        // base case
        if(parent[i]==-1)
        return i;

        return parent[i]=find_set(parent[i],parent);
    }

    // union function 

    void union_set(int x,int y,int *parent,int *rank)
    {
        int s1=find_set(x,parent);
        int s2=find_set(y,parent);

        if(s1!=s2)
        {
            if(rank[s1]<rank[s2])
            {
                parent[s1]=s2;
                rank[s2]+=rank[s1];
            }

            else
            {
                parent[s2]=s1;
                rank[s1]+=rank[s2];
            }
        }
    }  

    int pairing_prob()
    {
        //DSU logic to check if graph contains cycle or not 

        int *parent =new int[v];
        int *rank =new int[v];
        for(int i=0;i<v;i++)
        {
            parent[i]=-1;
            rank[i]=1;
        }

        for(auto edge:l)
        {
            int i=edge.first;
            int j=edge.second;

            int s1=find_set(i,parent);
            int s2=find_set(j,parent);

            union_set(s1,s2,parent,rank);
        }

        // go to all nodes 
        int ans=0;
        for(int i=0;i<v;i++)
        {
            ans+=v-rank[find_set(i,parent)];
        }
        delete[] parent;
        delete[] rank;

        return ans/2;
    }    
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,e,a,b;
    cin>>n>>e;

    graph g(n);

    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        g.add_edge(a,b);
    }

    cout<<g.pairing_prob();
    return 0;
}