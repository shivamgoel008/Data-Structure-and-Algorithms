#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1e9 + 7
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>


/* Think More, Code Less */
/* Soch bo*dk Soch */

bool compare(ll a,ll b)
{
    return a<b;
}


ll solve(string s)
{
    map<string,ll>mp;
    ll i;
    char ch='a';
    for(i=0;i<26;i++)
    {
        char ch2=ch+i;
        string st="";
        st+=ch2;
        // cout<<st<<endl;

        mp[st]=i+1;
    }


    // for(auto i:mp)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    ll n=s.length();

    ll dp[n];
    for(i=0;i<n;i++)
    dp[i]=0;

    // dp[1]=1;
    if(s[0]!='0')
    dp[0]=1;

    for(i=1;i<n;i++)
    {
        ll one=s[i-1]-'0';
        ll two=s[i]-'0';

        if(one==0 and two==0){
            dp[i]=0;
        }else if(one==0 and two!=0){
            dp[i]+=dp[i-1];

        }else if(one!=0 and two==0){
            cout<<"YES"<<endl;
            ll y=one*10+two;
            if(y<=26){
                if(i-2>=0){
                    dp[i]+=dp[i-2];
                } else {
                    dp[i]++;
                }
            }}else {
            dp[i]+=dp[i-1];
            ll y=one*10+two;
            if(y<=26){
                if(i-2>=0){
                    dp[i]+=dp[i-2];
                } else {
                    dp[i]++;
                }
            }
        }
    }


    for(i=0;i<n;i++)
    cout<<dp[i]<<" ";
    cout<<endl;

    return 0;
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
        ll i,j,n;
        string s;
        cin>>s;

        cout<<solve(s);
    }
    return 0;
}