#include<iostream>
using namespace std;

int main ()

{
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];

    int sr=0,sc=0,er=row-1,ec=col-1;

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }

    while(sc<=ec&&sr<=er)
    {
        for(i=sc;i<=ec;i++)
        cout<<a[sr][i]<<" ";

        sr++;

        for(i=sr;i<=er;i++)
        cout<<a[i][ec]<<" ";

        ec--;

        for(i=ec;i>=sc;i--)
        cout<<a[er][i]<<" ";

        er--;

        for(i=er;i>=sr;i--)
        cout<<a[i][sc]<<" ";
        sc++;
    }
    return 0;


}