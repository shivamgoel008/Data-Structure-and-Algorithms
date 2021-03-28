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
    list<int>*l;

public:
    graph(int v)
    {
        this->v;
        l=new list<int>[v];
    }

    void addedge(int x,int y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void print_adj_list()
    {
        for(int i=0;i<v;i++)
        {
            cout<<"Vextex"<<i<<"->";
            for( auto j:l[i])
            cout<<j<<" ";
            cout<<endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    graph g(4);

    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(2,3);
    g.addedge(1,2);

    g.print_adj_list();
    return 0;
}