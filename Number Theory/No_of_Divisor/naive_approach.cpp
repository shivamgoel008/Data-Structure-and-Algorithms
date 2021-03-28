#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i,count=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }

    cout<<count;

    return 0;
}
