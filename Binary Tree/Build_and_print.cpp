#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

class node
{
public:
    int data;
    node*left;
    node*right;

    node(int d)
    {
        data =d;
        left=NULL;
        right=NULL;
    }
};

node*buildtree()
{
    int n;
    cin>>n;

    if(n==-1)
    return NULL;

    node*root=new node(n);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}

void print_pre_order(node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    print_pre_order(root->left);
    print_pre_order(root->right);   
}



void print_in_order(node*root)
{
    if(root==NULL)
    return;

    print_in_order(root->left);
    cout<<root->data<<" ";
    print_in_order(root->right);   
}

void print_post_order(node*root)
{
    if(root==NULL)
    return;

    print_post_order(root->left);
    print_post_order(root->right);
    cout<<root->data<<" "; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*root=buildtree();

    print_pre_order(root);cout<<endl;
    print_in_order(root);cout<<endl;
    print_post_order(root);cout<<endl;
    
    return 0;
}