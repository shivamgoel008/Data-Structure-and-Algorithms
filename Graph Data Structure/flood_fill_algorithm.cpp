#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};

void flood_fill_algo(char matrix[][50],int i,int j,char ch,char color)
{
    //base case 
    if(i<0 or j<0 or i>=R or j>=C)
    return;

    //figure boundary condition 
    if(matrix[i][j]!=ch)
    return;

    //recursive call
    matrix[i][j]=color;

    for(int k=0;k<4;k++)
    {
        flood_fill_algo(matrix,i+dx[k],j+dy[k],ch,color);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}