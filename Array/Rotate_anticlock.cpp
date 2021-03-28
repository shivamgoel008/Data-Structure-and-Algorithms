#include<iostream>
using namespace std;

int main ()
{
    int row,col,i,j,k;
    cout<<"Enter the row and column: ";
    cin>>row>>col;

    int a[1000][1000];

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    for(k=0;k<row;k++)
    {
        i=0;
        j=col-1;
        while(i<j)
        {
            swap(a[k][i],a[k][j]);
            i++;
            j--;
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }

    
    return 0;
}