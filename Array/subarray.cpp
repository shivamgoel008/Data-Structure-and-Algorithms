#include<iostream>

using namespace std;

int main()
{
    int a[1000],i,n,key,k,j;
    cout<<"Enter the no of elements: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            cout<<a[k]<<" ";

            cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;

}