#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

void position_of_X(char *original,int i)
{
    if(original[i]=='\0')
    {
        cout<<original;
        return;
    }
    int n=strlen(original);
    int j=n-1;

    if(original[i]=='x')
    {
        for(int k=i+1;k<n;k++)
        original[k-1]=original[k];
        original[j]='x';
        j--;
    }

    position_of_X(original,i+1);
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        char original[1000];
        cin>>original;

        position_of_X(original,0);
        cout<<endl;
    }
    return 0;
}