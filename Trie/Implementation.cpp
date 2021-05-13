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

class Node
{
    public:
    char data;
    unordered_map<char,Node*>children;
    bool terminal;

    Node(char d)
    {
        data =d;
        terminal=false;
    }
};


class Trie
{
    Node* root ;
    int cnt=0;

    public:

    Trie()
    {
        // creating the root element of the tree  
        root=new Node('\0');
        cnt=0;
    }

    void insert(char *w)
    {
        Node*temp=root;
        for(int i=0;i<strlen(w);i++)
        {
            char ch=w[i];

            if(temp->children.count(ch))
            {
                temp=temp->children[ch];
            }

            else 
            {
                Node* n=new Node(ch);
                temp->children[ch]=n;
                temp=n;
            }
        }

        // marking the last node as terminal node 
        temp->terminal=true;
    }


    bool find(char *w)
    {
        Node* temp=root;
        for(int i=0;i<strlen(w);i++)
        {
            char ch=w[i];
            if(temp->children.count(ch)==0)
                return false;
            
            else
                temp=temp->children[ch];
        }

        return temp->terminal;
    }
};


int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Trie t;

    char words[][100]={"a","hello","not","news","apple"};
    char w[10];

    cin>>w;

    for(int i=0;i<5;i++)
    t.insert(words[i]);

    if(t.find(w))
    cout<<"PRESENT";

    else 
    cout<<"NOT PRESENT";


    return 0;
}
