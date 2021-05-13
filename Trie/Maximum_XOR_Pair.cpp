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


class node
{
    public:
    node* left;
    node* right;

     node(){
        left=NULL;
        right=NULL;
    }
};

class trie
{
    node*root;

    public:

    trie()
    {
        root=new node();
    }


    // insert function 

    void insert(int n)
    {
        node*temp=root;

        // for 32 bit number 

        for(int i=31;i>=0;i--)  // to extract the most significant bit 
        {
            int bit = (n>>i)&1;

            if(bit==0)
            {
                if(temp->left==NULL)
                {
                    temp->left=new node();
                    temp=temp->left;
                }

                else 
                temp=temp->left;
            }

            else if(bit==1)
            {
                if(temp->right==NULL)
                {
                    temp->right=new node();
                    temp=temp->right;
                }
                else 
                temp=temp->right;
            }
        }
    }

    // helper function to find the maximum xor 
    int max_xor_helper(int value)
    {
        int current_ans=0;
        node*temp=root;

        for(int j=31;j>=0;j--)
        {
            int bit=(value>>j)&1;

            if(bit==0)
            {
                // finding the complementary value
                if(temp->right!=NULL)
                {
                    temp=temp->right;
                    current_ans+=(1<<j);
                }

                else 
                temp=temp->left;
            }

            else if(bit==1)
            {
                if(temp->left!=NULL)
                {
                    temp=temp->left;
                    current_ans+=(1<<j);
                }

                else 
                {
                    temp=temp->right;
                }
            }
        }
        return current_ans;
    } 

    int max_xor(int *input,int n)
    {
        int i=0;
        int max_xor=INT_MIN;

        for(i=0;i<n;i++)
        {
            int val =input[i];
            insert(val);
            int current_xor=max_xor_helper(val);
            max_xor=max(max_xor,current_xor);
        }

        return max_xor;
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
    // test()
    {
        int input[]={3,10,5,25,2,8};
        trie t;
        cout<<t.max_xor(input,6);
    }
    return 0;
}