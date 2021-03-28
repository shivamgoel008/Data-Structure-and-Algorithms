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


node*lca(node*root,int a,int b)
{
    if(root==NULL)
    return NULL;

    if(root->data==a or root->data==b)
    return root;

    node*leftans=lca(root->left,a,b);
    node*rightans=lca(root->right,a,b);

    if(leftans!=NULL and rightans!=NULL)
    return root;

    if(leftans!=NULL)
    return leftans;

    return rightans;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node*root;
    root=buildtree();
    print_pre_order(root);
    cout<<endl;

    int a,b;
    cin>>a>>b;

    node*ans=lca(root,a,b);
    cout<<ans->data;

    return 0;
}