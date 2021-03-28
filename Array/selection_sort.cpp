#include<iostream>
using namespace std;

void selectionsort(int a[],int n)
{
    int i,j,pos,min;

    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[pos])
            pos=j;
        }
        swap(a[i],a[pos]);
    }
}

int main ()
{
    int n,i,a[1000];

    cout<<"Enter the no of elements: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    cin>>a[i];

    selectionsort(a,n);

    printf("Sorted array: ");
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}