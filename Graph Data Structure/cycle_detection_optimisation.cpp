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

    // find function 

    /*
    int find_set(int i,int *parent)
    {
        //base case 
        if(parent[i]==-1)
        return i;

        return find_set(parent[i],parent);
    }
    */

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

    bool contain_cycle()
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

            if(s1!=s2)
            union_set(s1,s2,parent,rank);

            else if(s1==s2)
            {
                return true;
            }
        }
        delete [] parent ;
        return false ;
    }    
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    graph g(4);

    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(2,3);
    g.add_edge(3,1);

    cout<<g.contain_cycle()<<endl;

    return 0;
}