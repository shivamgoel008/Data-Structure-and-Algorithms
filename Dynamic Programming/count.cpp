#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k,i;
    cin>>n>>k;

    ll a[n];

    fo(i,n)
    cin>>a[i];

    ll right=0,left=0,max_length=INT_MIN,zero_cnt=0;
     ll l1=0;
     ll r1=0;
    // while(right<n)
    fo(i,n)
    {
        if(a[right]==0)
        zero_cnt++;

        while(zero_cnt>k)
        {
            if(a[left]==0)
            zero_cnt--;

            left++;
        }

        //max_length=max(max_length,right-left+1);
        right++;
        int length=right-left;
        if(length>max_length){
            max_length=length;
            l1=left;
            r1=right;
        }
    }

    cout<<max_length<<endl;

    // for(i=0;i<n;i++)
    // {
    //     if(i>l1 and i<r1)
    //     {
    //         if(a[i]==0)
    //         cout<<1<<" ";
    //     }

    //     else
    //     cout<<a[i]<<" ";
    // }
    for(int i=0;i<l1;i++){
        cout<<a[i]<<" ";
    }
    for(int i=l1;i<r1;i++){
        cout<<1<<" ";
    }
    for(int i=r1;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}