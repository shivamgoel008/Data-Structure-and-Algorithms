#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

bool rat_maze(char a[100][100],int sol[100][100],int i,int j,int m,int n)
{
    if(i==m and j==n)
    {
        sol[i][j]=1;
        // print path
        fo(i,m)
        {
            fo(j,n)
            sol[i][j];
            cout<<endl;
        }
        cout<<endl;
        return true;
    }

    // reccurring case
    if(i>m or j>n)
    return false;

    if(a[i][j]=='X')
    return false;

    // assuming that solution EXIT
    sol[i][j]=1;

    bool rightsuccess=rat_maze(a,sol,i,j+1,m,n);
    bool downsuccess=rat_maze(a,sol,i+1,j,m,n);

    // backtraking
    sol[i][j]=0;

    if(rightsuccess==1 or downsuccess==1)
    return true;

    return false;

}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
    char maze[100][100]={"0000","00X0","000X","0X00"};
    int sol[100][100]={0};
    int m=4,n=4;
    bool ans= rat_maze(maze,sol,0,0,m-1,n-1);

    if(ans==false)
    cout<<"NOT EXIST!!";
    return 0;
}