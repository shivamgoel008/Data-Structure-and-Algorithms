#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

#define maxi 10000

vector<vector<int>> floyed_warshell(vector<vector<int>>graph)
{
    vector<vector<int>>dist(graph);
    int v=graph.size();

    // phases in Kth phase we include vertices (1,2,3....k) as itermediate vertices 

    for(int k=0;k<v;k++)
    {
        //iterate over the entire 2D array matrix
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                // if vertex k is included and can be minimised the distance 
                if(dist[i][j]>dist[i][k]+dist[k][j])
                dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }

    return dist;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,j;

    // 4 vertices (4X4) matrix
    vector<vector<int>>graph={{0,maxi,-2,maxi},{4,0,3,maxi},{maxi,maxi,0,2},{maxi,-1,maxi,0}};

    auto result=floyed_warshell(graph);
    for(i=0;i<result.size();i++)
    {
        for(j=0;j<result.size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}