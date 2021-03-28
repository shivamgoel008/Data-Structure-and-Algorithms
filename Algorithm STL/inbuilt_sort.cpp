#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}

int main ()
{
    int n,i;
    cin>>n;
    
    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    sort(a,a+n,cmp);

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";


}