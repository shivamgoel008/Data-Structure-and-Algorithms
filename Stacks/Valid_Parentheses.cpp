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



bool solve(string s)
{
    stack<char>st;

    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='(' or s[i]=='[' or s[i]=='{')
        st.push(s[i]);

        else 
        {
            cout<<"YES"<<endl;

            if(!st.empty())
            {
                if(s[i]==')' and st.top()!='(')
                return false;

                else if(s[i]=='}' and st.top()!='{' )
                return false;

                else if(s[i]==']' and st.top()!='[' )
                return false;

                st.pop();
            }
            
            else if(st.empty())
            return false;
        }
    }

    if(!st.empty())
    return false;

    return true;
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
        string s;
        cin>>s;

        if(solve(s))
        cout<<"true"<<endl;

        else 
        cout<<"false"<<endl;
    }
    return 0;
}