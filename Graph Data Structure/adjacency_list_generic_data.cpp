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
    unordered_map<string,list<pair<string,int>>>l;
public:
    void addedge(string x,string y,bool bidir,int wt)
    {
        l[x].push_back(make_pair(y,wt));
        if(bidir)
        l[y].push_back(make_pair(x,wt));
    }

    void printgraph()
    {
        for(auto i:l)
        {
            cout<<i.first<<"->";
            
            for(auto j:i.second)
            {
                cout<<j.first<<" "<<j.second<<",";
            }
            cout<<endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    graph g;
    g.addedge("A","B",true,20);
    g.addedge("A","B",true,40);
    g.addedge("A","C",true,10);
    g.addedge("C","D",true,40);
    g.addedge("A","D",false,50);

    g.printgraph();
    
    return 0;
}