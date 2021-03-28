//NO OF SUBARRAY WHOSE SUM IS DIVISIBLE BY 5

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n,i,j,sum,count=0;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++)
    cin>>a[i];

    
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            if(sum%5==0)
            count++;
        }
    }
    cout<<count;

    return 0;
}
