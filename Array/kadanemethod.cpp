#include<iostream>
using namespace std;

int main()
{
    int n,i,cs=0,ms=0;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int a[n];

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        cs=cs+a[i];
        if(cs<0)
        cs=0;
        ms=max(ms,cs);
    }
    cout<<"Maximum sum is: ";
    cout<<ms;


    return 0;

}