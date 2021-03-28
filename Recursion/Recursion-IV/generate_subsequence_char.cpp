#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int cnt=0;
void generate_subsequence(char *input,char *output,int i,int j)
{
    // base case
    if(input[i]=='\0')
    {
        cnt++;
        output[j]='\0';
        cout<<output<<" ";
        
        return;
    }
    // excluding the current character    
    generate_subsequence(input,output,i+1,j);

    // reccurring case
    // including the current caracter
    output[j]=input[i];
    generate_subsequence(input,output,i+1,j+1);

  
    

}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char a[1000],b[1000];
    ll n,i;
    cin>>a;
    generate_subsequence(a,b,0,0);

    cout<<endl<<cnt;

    return 0;
}