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

int solve(string str,string substr)
{
    // if(str==substr)
    // return 0;

    // return str.find(substr);


    if(str==substr)
    return 0;

    else if(substr=="")
    return 0;

    int i,j,k;

    for(i=0;i<str.length();i++)
    {
        int k=i;
        int ans=k;
        bool flag=true;

        if(str[k]==substr[0])
        {
            for(j=0;j<substr.length();j++)
            {
                // cout<<str[k]<<" "<<substr[j];
                if(str[k]!=substr[j])
                {
                    flag=false;
                    break;
                }
                k++;
            }

            if(flag==true)
            return ans;
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

        string str,substr;
        cin>>str>>substr;

        cout<<solve(str,substr);


    }
    return 0;
}