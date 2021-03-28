#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    int a[1000],i,n,key;
    cout<<"Enter the no of elements: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n,compare);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}

