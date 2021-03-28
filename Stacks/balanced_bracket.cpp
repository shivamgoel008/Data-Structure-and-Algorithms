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

    stack<char>sta;
    int flag=1;
    string s;
    cin>>s;

    if(s[0]==')' or s[0]=='(')
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            sta.push('(');

            else if(s[i]==')')
            {
                if(sta.empty() or sta.top()!='(')
                {
                    flag=0;
                    break;
                }
				else if(!sta.empty() and sta.top()=='(')
                sta.pop();

                else 
                sta.pop();
            }
        }
    }

    else if(s[0]=='{' or s[0]=='}')
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='{')
            sta.push('{');

            else if(s[i]=='}')
            {
                if(sta.empty() or sta.top()!='}')
                {
                    flag=0;
                    break;
                }
				else if(!sta.empty() and sta.top()=='}')
                sta.pop();

                else 
                sta.pop();
            }
        }
    }

    else 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            sta.push(']');

            else if(s[i]==']')
            {
                if(sta.empty() or sta.top()!='[')
                {
                    flag=0;
                    break;
                }
				else if(!sta.empty() and sta.top()=='[')
                sta.pop();

                else 
                sta.pop();
            }
        }
    }
    if(!sta.empty() or flag!=0)
    cout<<"Yes"<<endl;

    else 
    cout<<"No"<<endl;
    
    return 0;
}