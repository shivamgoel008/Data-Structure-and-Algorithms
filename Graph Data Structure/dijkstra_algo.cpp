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
    unordered_map<T,list<pair<T,int>>>m;
public:

    void add_edge(T u,T v,int dist,bool bidir=true)
    {
        m[u].push_back(make_pair(v,dist));
        if(bidir)
        m[v].push_back(make_pair(u,dist));
    }

    void print_adj_list()
    {
        //print the adjency list
        // iterate over all the keys value pair in map

        for(auto j:m)
        {
            cout<<j.first<<"->";
            // iterate over the list of cities 
            
            for(auto l:j.second)
            {
                cout<<"("<<l.first<<", "<<l.second<<")";
            }
            cout<<endl;
        }
    }

    void dijkstra_SSSP(T source)
    {
        unordered_map<T,int>dist;

        // setting all the distance to infinity 
        for(auto j:m)
        dist[j.first]=INT_MAX;

        //make a set to find out a node with minimum distance 
        set<pair<int,T>>s;
        dist[source]=0;
        s.insert(make_pair(0,source));

        while (!s.empty())
        {
            // find the pair at the front 
            auto p=*(s.begin());
            T node =p.second;

            int nodedist=p.first;
            s.erase(s.begin());

            // iterate over all the neighbouring/children for current code

            for(auto children:m[node])
            {
                if(nodedist+children.second<dist[children.first])
                {
                    // in the set updation of a perticular is not possible 
                    // we have to remove the old pair and insert the new pair to simulation updation 

                    T dest =children.first;

                    auto f=s.find(make_pair(dist[dest],dest));

                    if(f!=s.end())
                    s.erase(f);
                    // insert a new pair 

                    dist[dest]=nodedist+children.second;
                    s.insert(make_pair(dist[dest],dest));
                }
            }
        }
        for(auto d:dist)
        {
            if(d.first!=source)
            {
                if(d.second==INT_MAX)
                cout<<-1<<" ";
                else 
                cout<<d.second<<" ";
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test(t)
    {
        graph<int>g;

        int n,m,a,b,c,s,i;

        cin>>n>>m;

        for(i=0;i<n;i++)
        {
            cin>>a>>b>>c;
            g.add_edge(a,b,c);
        }
        cin>>s;

        g.dijkstra_SSSP(s);

        cout<<endl;
    }
    return 0;
}