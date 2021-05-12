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
    cout<<s<<endl;
    string str;
    int i,j;

    for(i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            for(j=i;j<s.length();j++)
            {
                str.push_back(s[j]);
            }
            break;
        }
    }

    for(i=str.length()-1;i>=0;i--)
    {
        if(str[i]==' ')
        str.pop_back();

        else if(str[i]!=' ')
        break;
    }

    cout<<str<<endl;

    vector<string>v;

    string t;
    for(i=0;i<str.length();i++)
    {
        // cout<<t<<endl;
        if(str[i]==' ')
        {
            for(j=i;j<str.length();j++)
            {
                if(str[j]!=' ')
                {
                    i=j-1;
                    break;
                }
            }
            v.push_back(t);
            t.clear();
        }

        else if(str[i]!=' ')
        {
            // cout<<str[i]<<endl;
            t.push_back(str[i]);
        }
    }

    if(!t.empty())
    v.push_back(t);

    reverse(v.begin(),v.end());


    string ans;

    for(i=0;i<v.size();i++)
    {
        if(i==0)
        ans+=v[i];

        else 
        ans+=" "+v[i];

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
        ll i,j;
        string s="    ";
        vector<string>v(4);

        for(i=0;i<4;i++)
        {
            string a;
            cin>>a;
            if(i==0)
            s= s+a;

            else 
            s+="       "+a;
        }

        // cout<<s<<endl;
        s+="     ";
        cout<<solve(s);

    }
    return 0;
}