
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)


void SieveOfEratosthenes(ll n, bool prime[], 
                         bool primesquare[], ll a[]) 
{ 
    // Create a boolean array "prime[0..n]" and 
    // initialize all entries it as true. A value 
    // in prime[i] will finally be false if i is 
    // Not a prime, else true. 
    for (ll i = 2; i <= n; i++) 
        prime[i] = true; 
  
    // Create a boolean array "primesquare[0..n*n+1]" 
    // and initialize all entries it as false. A value 
    // in squareprime[i] will finally be true if i is 
    // square of prime, else false. 
    for (ll i = 0; i <= (n * n + 1); i++) 
        primesquare[i] = false; 
  
    // 1 is not a prime number 
    prime[1] = false; 
  
    for (ll p = 2; p * p <= n; p++) { 
        // If prime[p] is not changed, then 
        // it is a prime 
        if (prime[p] == true) { 
            // Update all multiples of p 
            for (ll i = p * 2; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    ll j = 0; 
    for (ll p = 2; p <= n; p++) { 
        if (prime[p]) { 
            // Storing primes in an array 
            a[j] = p; 
  
            // Update value in primesquare[p*p], 
            // if p is prime. 
            primesquare[p * p] = true; 
            j++; 
        } 
    } 
} 
  
// Function to count divisors 
ll countDivisors(ll n) 
{ 
    // If number is 1, then it will have only 1 
    // as a factor. So, total factors will be 1. 
    if (n == 1) 
        return 1; 
  
    bool prime[n + 1], primesquare[n * n + 1]; 
  
    ll a[n]; // for storing primes upto n 
  
    // Calling SieveOfEratosthenes to store prime 
    // factors of n and to store square of prime 
    // factors of n 
    SieveOfEratosthenes(n, prime, primesquare, a); 
  
    // ans will contain total number of distinct 
    // divisors 
    ll ans = 1; 
  
    // Loop for counting factors of n 
    for (ll i = 0;; i++) { 
        // a[i] is not less than cube root n 
        if (a[i] * a[i] * a[i] > n) 
            break; 
  
        // Calculating power of a[i] in n. 
        ll cnt = 1; // cnt is power of prime a[i] in n. 
        while (n % a[i] == 0) // if a[i] is a factor of n 
        { 
            n = n / a[i]; 
            cnt = cnt + 1; // incrementing power 
        } 
  
        // Calculating the number of divisors 
        // If n = a^p * b^q then total divisors of n 
        // are (p+1)*(q+1) 
        ans = ans * cnt; 
    } 
  
    // if a[i] is greater than cube root of n 
  
    // First case 
    if (prime[n]) 
        ans = ans * 2; 
  
    // Second case 
    else if (primesquare[n]) 
        ans = ans * 3; 
  
    // Third case 
    else if (n != 1) 
        ans = ans * 4; 
  
    return ans; // Total divisors 
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
        // prime(p);
        ll n,num,den,div,cnt,i,j;
        cin>>n;

        

        if(n==1)
        cout<<0<<endl;

        else if(n==2)
        cout<<2<<endl;

        else if(n==3)
        cout<<3<<endl;

        else if(n==4)
        cout<<5<<endl;

        else if(n==5)
        cout<<8<<endl;

        else if(n==6)
        cout<<11<<endl;


        else if(n==7)
        cout<<14<<endl;

        dp[7]=14;

        else 
        {
            for(i=8;i<=n;i++)
            {
                ll div=countDivisors(i)
                div=div-3;
                ll diff=(i-1)-(i/2)
            }
        }

        

    }
    return 0;
}