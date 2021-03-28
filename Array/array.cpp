#include<iostream>
#include<climits>

using namespace std;

int binary(int a[],int n,int key)
{
    int start=0,last=n-1,mid;
    while(start<=last)
    {
        mid=(start+last)/2;

        if(a[mid]==key)
        {
            return mid+1;
        }

        else if(a[mid]>key)
        last=mid-1;

        else
        start=mid+1;

    }
    return -1;
}

int main()
{
    int a[1000],i,n,key;
    cout<<"Enter the no of elements: ";
    cin>>n;

    cout<<"Enter the elements of array: ";
    for(i=0;i<n;i++)
    cin>>a[i];

    cout<<"Enter the key of array: ";
    cin>>key;

    cout<<"Element found at: "<<binary(a,n,key)<<endl;

    return 0;

}
