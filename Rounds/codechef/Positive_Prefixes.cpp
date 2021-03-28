#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll n,k,i,counter;
        cin>>n>>k;

        vector<ll>arr(n,0);

        if(n<=10)
        {
            if(n==1)
            {
                if(k==1)
                cout<<1<<endl;
            }

            else if(n==2){
                if(k==1)
                cout<<"1 -2"<<endl;
                else if(k==2)
                cout<<"1 2"<<endl;
            }

            else if(n==3){
                if(k==1)
                cout<<"1 -2 -3"<<endl;
                else if(k==2)
                cout<<"1 2 -3"<<endl;
                else 
                cout<<"1 2 3"<<endl;
            }

            else if(n==4){
                if(k==1)
                cout<<"1 -2 -3 -4"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4"<<endl;
                else if(k==4)
                cout<<"1 2 3 4"<<endl;
            }

            else if(n==5){
                if(k==1)
                cout<<"1 -2 -3 -4 -5"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 5"<<endl;
                else if(k==5)
                cout<<"1 2 3 4 5 "<<endl;
            }

            else if(n==6){
                if(k==1)
                cout<<"1 -2 -3 -4 -5 -6"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5 -6"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5 -6"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 -5 6"<<endl;
                else if(k==5)
                cout<<"1 2 -3 4 5 6"<<endl;
                else if(k==6)
                cout<<"1 2 3 4 5 6"<<endl;
            }

            else if(n==7){
                if(k==1)
                cout<<"1 -2 -3 -4 -5 -6 -7"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5 -6 -7"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5 -6 -7"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 -5 6 -7"<<endl;
                else if(k==5)
                cout<<"1 2 -3 4 -5 6 7"<<endl;
                else if(k==6)
                cout<<"1 2 -3 4 5 6 7"<<endl;
                else if(k==7)
                cout<<"1 2 3 4 5 6 7"<<endl;
            }

            else if(n==8){
                if(k==1)
                cout<<"1 -2 -3 -4 -5 -6 -7 -8"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5 -6 -7 -8"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5 -6 -7 -8"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 -5 6 -7 -8"<<endl;
                else if(k==5)
                cout<<"1 2 -3 4 -5 6 -7 8"<<endl;
                else if(k==6)
                cout<<"1 2 -3 4 -5 6 7 8"<<endl;
                else if(k==7)
                cout<<"1 2 -3 4 5 6 7 8"<<endl;
                else if(k==8)
                cout<<"1 2 3 4 5 6 7 8"<<endl;
            }

            else if(n==9){
                if(k==1)
                cout<<"1 -2 -3 -4 -5 -6 -7 -8 -9"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5 -6 -7 -8 -9"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5 -6 -7 -8 -9"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 -5 6 -7 -8 -9"<<endl;
                else if(k==5)
                cout<<"1 2 -3 4 -5 6 -7 8 -9 "<<endl;
                else if(k==6)
                cout<<"1 2 -3 4 -5 6 -7 8 9"<<endl;
                else if(k==7)
                cout<<"1 2 -3 4 -5 6 7 8 9"<<endl;
                else if(k==8)
                cout<<"1 2 -3 4 5 6 7 8 9"<<endl;
                else if(k==9)
                cout<<"1 2 3 4 5 6 7 8 9"<<endl;
            }

            else if(n==10){
                if(k==1)
                cout<<"1 -2 -3 -4 -5 -6 -7 -8 -9 -10"<<endl;
                else if(k==2)
                cout<<"1 2 -3 -4 -5 -6 -7 -8 -9 -10"<<endl;
                else if(k==3)
                cout<<"1 2 -3 4 -5 -6 -7 -8 -9 -10"<<endl;
                else if(k==4)
                cout<<"1 2 -3 4 -5 6 -7 -8 -9 -10"<<endl;
                else if(k==5)
                cout<<"1 2 -3 4 -5 6 -7 8 -9 -10"<<endl;
                else if(k==6)
                cout<<"1 2 -3 4 -5 6 -7 8 -9 10"<<endl;
                else if(k==7)
                cout<<"1 2 -3 4 -5 6 -7 8 9 10"<<endl;
                else if(k==8)
                cout<<"1 2 -3 4 -5 6 7 8 9 10"<<endl;
                else if(k==9)
                cout<<"1 2 -3 4 5 6 7 8 9 10"<<endl;
                else if(k==10)
                cout<<"1 2 3 4 5 6 7 8 9 10"<<endl;
            }
        }

        else 
        {
        if(n%2==0)
        {
            if(k<=n/2)
            {
                counter=0;
                
                for(i=0;i<n;i++)
                {
                    if(i%2!=0)
                    {
                        arr[i]=(i+1);
                        counter++;
                    }
                    if(counter==k)
                    break;
                }

                for(i=0;i<n;i++)
                {
                    if(arr[i]==0)
                    arr[i]=-1*(i+1);
                }
            }

            else
            {
                counter=0;
                
                for(i=0;i<n;i++)
                {
                    if(i%2!=0)
                    {
                        arr[i]=-1*(i+1);
                        counter++;
                    }
                    if(counter==n-k)
                    break;
                }

                for(i=0;i<n;i++)
                {
                    if(arr[i]==0)
                    arr[i]=(i+1);
                }
            }
        }

        else if(n%2!=0)
        {
            if(k<=(n+1)/2)
            {
                counter=0;
                
                for(i=0;i<n;i++)
                {
                    if(i%2!=0)
                    {
                        arr[i]=(i+1);
                        counter++;
                    }
                    if(counter==k)
                    break;
                }

                for(i=0;i<n;i++)
                {
                    if(arr[i]==0)
                    arr[i]=-1*(i+1);
                }
            }

            else
            {
                counter=0;
                
                for(i=0;i<n;i++)
                {
                    if(i%2!=0)
                    {
                        arr[i]=-1*(i+1);
                        counter++;
                    }
                    if(counter==n-k)
                    break;
                }

                for(i=0;i<n;i++)
                {
                    if(arr[i]==0)
                    arr[i]=(i+1);
                }
            }

        }
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        }
    }
    return 0;
}