#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int key,a[]={11,22,33,44,55,66,77,88,99,110},n;
    n=sizeof(a)/sizeof(a[0]);

    cout<<"Enter the key: ";
    cin>>key;

    auto it=find(a,a+n,key);

    int index=it-a;

    cout<<index;

    return 0;
    

}