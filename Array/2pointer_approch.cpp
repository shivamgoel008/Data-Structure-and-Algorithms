#include<iostream>
using namespace std;

int main()
{
    int n,cs=0,ms=0,sum,i,j;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int a[n];
    j=n-1;

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the sum of array: ";
    cin>>sum;
    i=0;j=n-1;

    while(i<j)
    {
        if(a[i]+a[j]==sum)
        {
            cout<<a[i]<<"and"<<a[j]<<endl;
            i++;
            j--;
        }

        else if(a[i]+a[j]>sum)
        j--;

        else if(a[i]+a[j]<sum)
        i++;
    }

    return 0;
}


