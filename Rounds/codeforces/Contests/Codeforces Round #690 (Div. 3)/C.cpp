
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

// bool check(ll n)
// {
//     // string s=to_string(n);
//     set<ll>st;
//     ll dum=n;


//     ll cnt=0,sum=0;

//     while(n>0)
//     {
//         cnt++;
//         ll no=n%10;
//         sum+=no;
//         st.insert(no);
//         n=n/10;
//     }

//     if(cnt==st.size() and sum==dum)
//     return true;

    
//     return false;

// }

int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test()
    {
        ll x;
        cin>>x;

        if(x>=1 and x<10)
        cout<<x<<endl;


        else if(x>=10 )
        {
            vector<ll>v;
            ll num=9;
            while(x>1)
            {
                if(x-num>=0)
                {
                    v.push_back(num);
                    x=x-num;
                }
                num--;

                if(num<=0)
                break;
            }

            if(num<=0)
            cout<<-1<<endl;

            else
            {
                /* code */
                if(x>0)
            v.push_back(x);

            reverse(v.begin(),v.end());

            for(auto i:v)
            cout<<i;
            cout<<endl;

            }
            

            
            // cout<<x<<endl;
        }




        
    }
    return 0;
}