
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool palind(string s)
{
    string dum=s;
    reverse(dum.begin(),dum.end());

    if(dum==s)
    return false;

    return true;
}

ll diff(string a,string b)
{
    ll cnt=0;
    if(a.length()==b.length())
    for(ll i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        cnt++;
    }

    return cnt;
}

ll ones(string a)
{
    ll cnt=0;
    for(ll i=0;i<a.length();i++)
    {
        if(a[i]=='1')
        cnt++;
    }

    return cnt;
}

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
        string s;
        ll i,j;
        cin>>s;

        set<string>st;
        for(i=0;i<s.length();i++)
        {
            string dummy;
            for(j=i;j<s.length();j++)
            {
                dummy.push_back(s[j]);
                st.insert(dummy);
            }
            dummy.clear();
        }   
        set<string>dummy=st;
        ll palindrome=0;

        for(auto i:dummy)
        {
            if(palind(i)==false and i.length()>2)
            {
                // cout<<i<<endl;
                palindrome++;
                st.erase(i);
            }
        }
        dummy=st;
        ll cnt=0;
        for(auto i:dummy)
        {
            for(auto j:dummy)
            {
                if(i.length()==j.length())
                {
                    if(ones(i)==ones(j) and i.length()>=3 and i!=j )
                    {
                        bool cnti110=false,cnti101=false,cnti111=false;
                        bool cntj110=false,cntj101=false,cntj111=false;

                        string firs=i,secon=j;

                        for(ll inner=0;inner<firs.length();inner++)
                        {
                            string idea;
                            for(ll outer=inner;outer<firs.length();outer++)
                            {
                                idea.push_back(firs[outer]);
                                if(idea.length()==3)
                                {
                                    // cout<<idea<<endl;
                                    if(idea=="011" or idea=="110")
                                    cnti110=true;

                                    // else if(idea=="111")
                                    // cnti111=true;

                                    // else if(idea=="101")
                                    // cnti101=true;

                                    // else if(idea=="010")
                                    // cnti010=true;

                                    break;
                                }
                            }
                        }

                        for(ll inner=0;inner<secon.length();inner++)
                        {
                            string idea;
                            for(ll outer=inner;outer<secon.length();outer++)
                            {
                                idea.push_back(secon[outer]);
                                if(idea.length()==3)
                                {
                                    // cout<<idea<<endl;
                                    if(idea=="011" or idea=="110")
                                    cntj110=true;

                                    // else if(idea=="111")
                                    // cntj111=true;

                                    // else if(idea=="101")
                                    // cntj101=true;

                                    // else if(idea=="010")
                                    // cntj010=true;

                                    break;
                                }
                            }
                        }


                        if(cnti110==cntj110  and (cnti110==true ) and cnti111==cntj111)
                        {

                            
                                cnt++;
                                cout<<firs<<" "<<secon<<endl;   
                                st.erase(firs);
                                break;
                            
                            
                        }


                    }
                }

            }
        }
        cout<<cnt/2+palindrome+st.size()<<endl;
    }
    return 0;
}