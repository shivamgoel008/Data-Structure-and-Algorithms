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

 int solve(string s) {
        

        // remove the last space of the string 
        if(s.length()==0)
            return 0;
        
        bool flag=false,check=false;
        
        int n=s.length()-1;
        int cnt=0;
        for(int i=n;i>=0;i--){
            if(s[i]!=' '){
                for(int j=i;j>=0;j--){
                    if(s[j]==' '){
                        flag=true;
                        break;
                    }
                    cnt++;
                }
                break;
            }
            
        }
       
        return cnt;
        
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
        string s;
        cin>>s;

        cout<<solve(s);

    }
    return 0;
}