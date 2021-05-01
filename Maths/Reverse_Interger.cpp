#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}

int reverse_int(int A) {
    
    
    
    if(A<0)
    {

        // cout<<"YES"<<endl;
        A=-1*A;

        
        
        long long int ans=0;

        // cout<<A<<endl;
        
        while(A>0)
        {
            ans=ans*10+A%10;
            A=A/10;
        }

        // cout<<ans<<endl;

        long long int temp=ans,cnt=0;
        while(temp>0){
            cnt++;
            temp=(temp>>1);
        }

        // cout<<cnt<<endl;
        
        if(cnt>=32)
        return 0;
        
        return -1*ans;
    }
    
    else
    {
        // A=-1*A;
        // int temp=A,cnt=0;
        // while(temp>0){
        //     cnt++;
        //     temp=(temp>>1);
        // }

        // // cout<<cnt<<endl;
        
        // if(cnt>32)
        // return 0;

        int ans=0;
        
        while(A>0)
        {
            ans=ans*10+A%10;
            A=A/10;
        }

        long long int temp=ans,cnt=0;
        while(temp>0){
            cnt++;
            temp=(temp>>1);
        }

        // cout<<cnt<<endl;
        
        if(cnt>=32)
        return 0;
        
        return ans;
    }
}


int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // test()
    {
        int n;
        cin>>n;

        cout<<reverse_int(n);
        
    }
    return 0;
}