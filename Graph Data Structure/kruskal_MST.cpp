#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

class DSU
{
    int *parent;
    int *rank;

public:

    DSU(int n)
    {
        parent=new int[n];
        rank=new int[n];

        // parent =-1 and rank=1
        for(int i=0;i<n;i++)
        {
            parent[i]=-1;
            rank[i]=1;
        }
    }

    // find function 
    int find_set(int i)
    {
        // base case
        if(parent[i]==-1)
        return i;

        return parent[i]=find_set(parent[i]);
    }

    void union_set(int x,int y)
    {
        int s1=find_set(x);
        int s2=find_set(y);

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
};

class graph
{
    vector<vector<int>>edgelist;
    int v;

public: 
    graph(int v)
    {
        this->v=v;
    }

    void addedge(int x,int y,int w)
    {
        edgelist.push_back({w,x,y});
    }

    int kuskal_MST()
    {
        //main logic 
        //sort all the  edges based upon weight

        sort(edgelist.begin(),edgelist.end());
        // initialise DSU
        DSU s(v); 
        int ans =0;

        for(auto edge:edgelist)
        {
            int w=edge[0];
            int x=edge[1];
            int y=edge[2];

            // take that edge in MST if it does not form a cycle 

            if(s.find_set(x)!=s.find_set(y))
            {
                s.union_set(x,y);
                ans+=w;
            }
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v,e;
    cin>>v>>e;

    graph g(v);

    for(int i=0;i<e;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        g.addedge(a,b,c);
    }

    cout<<g.kuskal_MST();
    return 0;
}