//TO FIND UNIQUE NUMBER 
//EVERY NUMBER OCCUR TWICE EXCEPT ONE... WE HAVE TO FIND THAT UNIQUE ARRAY

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;

    int a[n],i;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }

    cout<<ans;

    return 0;
}