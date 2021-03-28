#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define set(a) memset(a,0,sizeof(a))
#define sort(a) sort(a,a+n)
#define fo(i,n) for(i=0;i<n;i++)
#define PI 3.1415926535897932384626

void move(int n,char source,char helper,char destination)
{
    //base case
    if(n==0)
    return;

    //reccurring case-move (n-1) disk from source to helper
    move(n-1,source,destination,helper);
    cout<<"Shift disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    move(n-1,helper,source,destination);

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    char source,helper,destination;
    cin>>n;
    time_t start=clock();
    move(n,'A','B','C');
    time_t end=clock();

    cout<<end-start;
    
    return 0;
}
