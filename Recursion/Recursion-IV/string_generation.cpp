#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)
 
 void generate_string(char *input,char *output,int i,int j)
 {
     if(input[i]=='\0')
     {
         output[j]='\0';
         cout<<output<<endl;
         return;
     }

    //  recurring case

    // one digit at a time
    int digit=input[i]-'0';
    char ch=digit+'A'-1;
    output[j]=ch;
    generate_string(input,output,i+1,j+1);

    // two digit a time
    if(input[i+1]!='\0')
    {
        int seconddigit=input[i+1]-'0';
        int no=digit*10+seconddigit;

        if(no<=26)
        {
            ch=no+'A'-1;
            output[j]=ch;
            generate_string(input,output,i+2,j+1);
        }
    }
    return;
 }
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char input[1000],output[1000];
    cin>>input;
    generate_string(input,output,0,0);

    return 0;
}