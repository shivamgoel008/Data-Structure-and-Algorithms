#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

void generate_bracket(char *out,int n,int index,int open,int close)
{
    if(index==2*n)
    {
        out[index]='\0';
        cout<<out<<endl;
        return ;
    }

    if(open<n)
    {
        out[index]='(';
        generate_bracket(out,n,index+1,open+1,close);
    }

    if(close<open)
    {
        out[index]=')';
        generate_bracket(out,n,index+1,open,close+1);
    }

}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    char out[1000];
    generate_bracket(out,n,0,0,0);
    return 0;
}