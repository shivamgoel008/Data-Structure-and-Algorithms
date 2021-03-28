/*
Example array n=5;
1 3 2 6 4

step1-->find cummulative sum of the array --> result --> 0 1 4 6 12 16
step2-->(cummulative sum %5)--> 0 1 4 1 2 1
step3-->find the frequecy of every digit
step4-->if frequency is greater than freqC2
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--)
    {
        ll n,ans=0,i,sum=0;
        cin>>n;

        ll a[n],freq[n]={0};

        freq[0]=1;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
            sum%=n;
            sum=(sum+n)%n;
            freq[sum]++;
        }

        for(i=0;i<n;i++)
        {
                ll m=freq[i];
                ans=ans+(m*(m-1))/2;
        }

        cout<<ans<<endl;
    }
 
    return 0;
}
