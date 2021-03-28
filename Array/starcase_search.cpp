#include<iostream>

using namespace std;

int main()
{
    int n,i,j,key,a[10][10],flag=0;
    cout<<"Enter the no of element: ";
    cin>>n;
    
    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the key: ";
    cin>>key;

    i=0;j=n-1;

    while(i<n&&j>=0)
    {

        
        if(a[i][j]==key)
        {
            cout<<"Found at"<<i+1<<" "<<j+1;
            flag=1;
            break;
        }

        else if(a[i][j]>key)
        j--;

        else if(a[i][j]<key)
        i++;
    }

    if(flag==0)
    cout<<"NOT FOUND!!";
}