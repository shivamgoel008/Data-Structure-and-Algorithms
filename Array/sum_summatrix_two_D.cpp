#include<iostream>
using namespace std;

int main ()
{
    int i,j,n;
    cin>>n;
    int a[n][n],sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
            sum=sum+a[i][j]*(i+1)*(j+1)*(n-i)*(n-j);
        }
    }
    cout<<sum;
    return 0;
}