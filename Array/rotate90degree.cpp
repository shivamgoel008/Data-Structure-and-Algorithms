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


void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<j)
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
    } 

bool compare(ll a,ll b)
{
    return a<b;
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
        int n,a;
        cin>>n;

        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            vector<int>row;
            for(int j=0;j<n;j++)
            {
                cin>>a;
                row.push_back(a);
            }

            v.push_back(row);
        }
        rotateby90(v,n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}