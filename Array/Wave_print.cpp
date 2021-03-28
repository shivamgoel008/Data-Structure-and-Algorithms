#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];


    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<n;j++)
            cout<<a[j][i]<<" ";
        }

        else if(i%2!=0)
        {
            for(j=n-1;j>=0;j--)
            cout<<a[j][i]<<" ";
        }
    }
}