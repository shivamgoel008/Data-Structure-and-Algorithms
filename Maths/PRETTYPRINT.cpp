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
        int n,i,j,l;
        cin>>n;

        int rc=2*n-1;

        vector<vector<int>>ans;

        for(i=0;i<rc;i++)
        {
            vector<int>temp;

            for(j=0;j<rc;j++)
            {
                temp.push_back(-1);
            }

            ans.push_back(temp);
        }


        

        i=0;
        j=0;

        while(i<=j)
        {
            for(l=0;l<rc;l++)
            {
                if(ans[i][l]==-1)
                {
                    ans[i][l]=n;
                    ans[rc-1-i][l]=n;
                }
            }

            for(l=0;l<rc;l++)
            {
                if(ans[l][j]==-1)
                {
                    ans[l][j]=n;
                    ans[l][rc-1-j]=n;
                }
            }

            //  for(auto i:ans)
            // {
            //     for(auto j:i)
            //     cout<<j<<" ";

            //     cout<<endl;
            // }

            // cout<<endl;


            i++;
            j++;
            n--;

            if(n==0)
            break;
        }


        for(auto i:ans)
        {
            for(auto j:i)
            cout<<j<<" ";

            cout<<endl;
        }
        
    }
    return 0;
}