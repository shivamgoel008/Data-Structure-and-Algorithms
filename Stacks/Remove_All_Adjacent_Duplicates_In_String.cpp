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


string solve(string s)
{
    stack<char>st;

    if(s.length()==0)
    return "";

    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        st.push(s[i]);

        else if(!st.empty())
        {
            if(st.top()==s[i])
            st.pop();

            else
            st.push(s[i]);
        }
    }

    string ans;


    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}



// using string as stack
string optimised_solve(string s)
{
    string st;

    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
        st.push_back(s[i]);

        else if(!st.empty())
        {
            if(st.back()==s[i])
            st.pop_back();

            else
            {
                st.push_back(s[i]);
                // ans+=st.top();
            }
        }
    }


    return st;
}
int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    test()
    {
        ll i,j,n;
        string s;
        cin>>s;

        cout<<solve(s)<<endl;
    }
    return 0;
}