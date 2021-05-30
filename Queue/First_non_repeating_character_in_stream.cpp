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
    // cout<<s<<endl;
    queue<char>q;
    map<char,int>mp;

    string ans;

    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            ans.push_back(s[i]);
            q.push(s[i]);
            mp[s[i]]++;
        }

        else 
        {
            mp[s[i]]++;
            bool flag=false;
            q.push(s[i]);
            

            while(!q.empty())
            {
                // cout<<q.front()<<" "<<mp[q.front()]<<endl;
                if(mp[q.front()]==1)
                {
                    ans.push_back(q.front());
                    flag=true;
                    break;
                }
                
                

                if(q.empty())
                break;

                q.pop();
            }
            // cout<<"YES"<<endl;
            // cout<<flag<<endl;

            if(flag==false)
            ans.push_back('#');

            // queue<char>e=q;

        // while(!e.empty())
        // {
        //     cout<<e.front()<<" ";
        //     e.pop();
        // }
        // cout<<endl;

        // for(auto i:mp)
        // cout<<i.first<<" "<<i.second<<endl;
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
        ll i,j,n;
        string s;
        cin>>s;

        string ans=solve(s);

        cout<<ans<<endl;
    }
    return 0;
}