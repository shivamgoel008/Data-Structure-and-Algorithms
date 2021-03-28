#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

bool cancook(ll paratha,ll cook,ll rank[],ll mid)
{
    ll sum=0,i;
    for(i=0;i<cook;i++)
    {
        ll root=(1+sqrt(1+4*(rank[i]*(2*mid)/rank[i])))/2;
        sum=sum+root;
    }

    if(sum>=paratha)
    return true;
    else 
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll paratha,cook,ans,i;
    cin>>paratha>>cook;
    
    ll rank[cook];

    for(i=0;i<cook;i++)
    cin>>rank[i];

    ll first,last,mid;

    first=0;
    last=(paratha/2)*(rank[cook-1]+paratha*rank[cook-1]);

    while(first<=last)
    {
        mid=(first+last)/2;

        if(cancook(paratha,cook,rank,mid))
        {
            ans=mid;
            last=mid-1;
        }

        else 
        first=mid+1;
    }

    cout<<ans;

    return 0;
}
