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
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    
        char ch;
        queue<char>q;
        cin>>ch;
        int freq[27]={0};

        while(ch!='.')
        {
            q.push(ch);
            freq[ch-'a']++;
            cin>>ch;
        }

        while(!q.empty())
        {
            ch=q.front();
            if(freq[ch-'a']>1)
            q.pop();

            else 
            {
                cout<<q.front();
                q.pop();
                break;
            }
        }


    return 0;
}