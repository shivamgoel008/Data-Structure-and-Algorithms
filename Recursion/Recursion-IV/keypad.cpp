#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

void generate_names(char *in,char *out,int i,int j)
{
    char keypad[][10]={"","","ABC","DEF","GHI","JKL","LMN","OPQ","RST","UVW","XYZ"};
    // base case
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    // recurring case
    int digit=in[i]-'0';

    if(digit==1 or digit==0)
    generate_names(in,out,i+1,j);

    for(int k=0;keypad[digit][k]!='\0';k++)
    {
        out[j]=keypad[digit][k];
        generate_names(in,out,i+1,j+1);
    }
    return;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char ch[100],out[100];
    cin>>ch;

    generate_names(ch,out,0,0);
    
    return 0;
}