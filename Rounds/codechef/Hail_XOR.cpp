#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

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
        ll n,x,i,k=30,j,cnt=0,p;
        bool check =true;
        cin>>n>>x;

        vector<ll>array(n);

        for(i=0;i<n;i++)
        cin>>array[i];

        if(n==2)
        {
            cnt=0;
            while(array[0]>0)
            {
                ll dummy=log(array[0])/log(2);
                dummy=pow(2,dummy);

                array[0]=array[0]^dummy;
                array[1]=array[1]^dummy;

                cnt++;
                if(cnt==x)
                {
                    check =false;
                    break;
                }
            }

            

            if(check ==true)
            {
                if(cnt<x)
                {
                    if((x-cnt)%2!=0)
                    {
                        array[0]=array[0]^1;
                        array[1]=array[1]^1;
                    }
                }
            }


            for(auto i:array)
            cout<<i<<" ";
            cout<<endl;
        }

        else if(n>3)
        {

        for(i=0;i<n-1;i++)
        {

                while(array[i]>0)
                {
                    // cout<<array[i];
                    p=log2(array[i]);
                    // cout<<p<<" ";
                    ll num=pow(2,p);
                    array[i]=num^array[i];

                    for(j=i+1;j<n;j++)
                    {
                        ll txor=array[j]^num;
                        if(txor<array[j])
                        {
                            array[j]=txor;
                            cnt++;
                            break;
                        }
                    }

                    if(j==n)
                    {
                        array[array.size()-1]=array[array.size()-1]^num;
                        cnt++;
                    }

                    if(cnt==x)
                    {
                        check =false;
                        break;
                    }

                    // for(auto i:array)
                    // cout<<i<<" ";
                    // cout<<endl;
                } 

                if(check ==false)
                break;
        }

        // for(auto i:array)
        // cout<<i<<" ";
        // cout<<endl;

        // cout<<cnt<<endl;

        if(check ==false)
        {
            for(auto i:array)
            cout<<i<<" ";
            cout<<endl;
        }

        else if(check ==true)
        {
            if(cnt==x or cnt+1==x)
            {
                for(auto i:array)
                cout<<i<<" ";
                cout<<endl;
            }

            else if(x>cnt+1)
            {
                for(auto i:array)
                cout<<i<<" ";
                cout<<endl;

            }
        }
        }
    }
    return 0;
}