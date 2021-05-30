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

    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        // cout<<"SOLE"<<endl;
        if(s[i]=='(')
        st.push(s[i]);

        else if(s[i]==')')
        {
            cout<<"YES"<<endl;
            bool flag=false;
            while(!st.empty() and st.top()!='(')
            {
                if(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/')
                flag=true;

                st.pop();
            }

            if(flag==false)
            return true;

            else 
            st.pop();
        }


        else 
        st.push(s[i]);

        
        // stack<char>dum=st;

        // while(!dum.empty())
        // {
        //     cout<<dum.top()<<" ";
        //     dum.pop();
        // }
        // cout<<endl;
    }

    return false;
}

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}