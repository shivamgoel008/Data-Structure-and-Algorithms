#include <bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

bool compare(ll a,ll b)
{
    return a<b;
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
        // ll i,j,n;
        ordered_set st;
        st.insert(5);
        st.insert(10);
        st.insert(1);
        st.insert(3);
        st.insert(6);

        for(auto i:st)
        cout<<i<<" ";
        cout<<endl;

        cout<<(*st.find_by_order(3))<<endl;

        cout<<st.order_of_key(6)<<endl;

        multiset <ll> s;
        

    }
    return 0;
}