#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}

bool matrix_search(vector<vector<int>>v,int key)
{
    int start_j=v[0].size()-1;
    int start_i=0;

    int end_i=v.size()-1;
    int end_j=0;

    // cout<<v[start_i][start_j];


    while (true)
    {
        if(v[start_i][start_j]==key)
        return true;

        else if(v[start_i][start_j]<key)
            start_i++;

        else 
        start_j--;

        if(start_i>=v.size() or start_j<0)
        break;
    }
    return false;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        int n,m,i,j;
        cin>>n>>m;

        vector<vector<int>>v;
        

        for(i=0;i<n;i++)
        {
            vector<int>temp;
            for(j=0;j<m;j++)
            {
                int a;
                cin>>a;
                temp.push_back(a);
            }
            v.push_back(temp);
        }

        int key;
        cin>>key;

        cout<<matrix_search(v,key);

    }
    return 0;
}