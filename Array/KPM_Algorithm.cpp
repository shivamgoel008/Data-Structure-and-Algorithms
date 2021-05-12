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


vector<int> compute_Z_array(string pattern)
{
    // length of the longest sufix and prefix 
    int len=0;

    // creating the Z array of same length of pattern length and initializing first element(0th index) as zero
    vector<int>Z(pattern.length(),0);

    int i=1;
    while(i<pattern.length())
    {
        if(pattern[i]==pattern[len])
        {
            len++;
            Z[i]=len;
            i++;
        }

        else if(pattern[i]!=pattern[len])
        {
            if(len!=0)
            {
                len=Z[len-1];
            }

            else 
            {
                Z[i]=0;
                i++;
            }
        }
    }

    return Z;
}

int KMP_Algorithm(string str,string pattern)
{

    // if pattern is empty then return 0
    if(pattern=="")
    return 0;


    int n=str.length();
    int m=pattern.length();


    // creating the Z array of the pattern string 
    vector<int>Z=compute_Z_array(pattern);

    for(auto i:Z)
    cout<<i<<" ";
    cout<<endl;

    int i=0;
    int j=0;

    // traversing in the str string 
    while(i<n)
    {
        if(pattern[j]==str[i])
        {
            j++;
            i++;
        }

        if(j==m)
        {
            // string matches at i-j;
            // cout<<i<<" "<<j<<endl;
            return i-j;
            // j=Z[j-1];
            
        }

        else if(i<n and pattern[j]!=str[i])
        {
            if(j!=0)
            j=Z[j-1];

            else 
            i=i+1;
        }
    }

    return -1;
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
        string patern, str ;
        cin>>str>>patern;

        cout<<KMP_Algorithm(str,patern);
    }
    return 0;
}

