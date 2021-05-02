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

int medianInRowWiseSortedMatrix(vector<vector<int>> &matrix, int r, int c)
{
    int minimum=INT_MAX,maximum=INT_MAX;

    for(int i=0;i<r;i++)
    {
        if(matrix[i][0]<minimum)
        minimum=matrix[i][0];

        if(matrix[i][c-1]>maximum)
        maximum=matrix[i][c-1];
    }

    int half=(r*c+1)/2;

    while(minimum<maximum)
    {
        int mid=(maximum+minimum)/2;

        int place =0;

        // finding the number of elements smaller then mid

        for(int i=0;i<r;i++)
        place+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();

        if(place<half)
        minimum=mid+1;

        else if(place==half)
        break;

        else 
        maximum=mid;
    }

    return minimum;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {


        
    }
    return 0;
}