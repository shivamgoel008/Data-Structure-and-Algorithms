// #include <bits/stdc++.h>
// using namespace std;
// #define pb push_back
// #define mp make_pair
// #define ll long long
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define fo(i,n) for(i=0;i<n;i++)
// #define set(a) memset(a,0,sizeof(a))
// #define MOD 1000000007
// #define test() ll t; cin>>t; while(t--)

// bool compare(ll a,ll b)
// {
//     return a<b;
// }

// ll solve(vector<ll>v,ll target)
// {
//     sort(v.begin(),v.end(),greater<int>());
//     ll n=v.size();
//     ll fina=-1;

//     if(n==1)
//     {
//         if(target>v[0])
//         return -1; 

//         else 
//         return target;
//     }
    

//     else 
//     {
//         ll ans=INT_MAX;
        
//         for(ll i=v[0];i>=0;i--)
//         {
//             ll sum=0;
//             for(ll j=0;j<n;j++)
//             {
//                 if(v[j]>i)
//                 {
//                     sum+=v[j]-i;
//                 }
//             }

//             // cout<<sum<<endl;

            
//             if(target-sum>=0 and target-sum<ans)
//             {
//                 // cout<<"YES "<<target-sum<<" "<<i<<endl;
//                 ans=target-sum;
//                 fina=i;
//             }
//         }
//     }

//     return fina;
// }

// int main ()
// {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);  
//     // test()
//     {
//         ll i,j,n,target;
//         cin>>n>>target;

//         vector<ll>v(n);

//         for(i=0;i<n;i++)
//         cin>>v[i];

//         cout<<solve(v,target);
        
//     }
//     return 0;
// }





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

ll solve(vector<ll>v,ll target)
{
    ll sum=0;
    for(int i=0;i<v.size();i++)
    sum+=v[i];
    // cout<<sum<<endl;
    if(sum<target)
    return -1;

    sort(v.begin(),v.end(),greater<int>());

    ll first=0;
    ll last=v[0];
    ll ans;

    while(first<=last)
    {
        ll mid=(first+last)/2;
        ll cur_sum=0;
        for(ll i=0;i<v.size();i++)
        {
            if(mid<v[i])
            cur_sum+=v[i]-mid;
        }

        // cout<<mid<<" "<<cur_sum<<endl;
        if(cur_sum==target)
        {
            ans=mid;
            return mid;
        }

        else if(cur_sum<target)
        {
            // ans=mid;
            last=mid-1;
        }

        else if(cur_sum>target)
        {
            ans=mid;
            first=mid+1;
        }
    }

    return ans;
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
        ll i,j,n,target;
        cin>>n>>target;

        vector<ll>v(n);
        
        for(i=0;i<n;i++)
        cin>>v[i];

        cout<<solve(v,target);
    }
    return 0;
}