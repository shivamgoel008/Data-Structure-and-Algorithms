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
    node*left,*right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

node*build_binary_tree()
{
    int d;
    cin>>d;

    if(d==-1)
    return NULL;

    node*root=new node(d);

    root->left=build_binary_tree();
    root->right=build_binary_tree();

    return root;
}

void print_binary_tree(node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    print_binary_tree(root->left);
    print_binary_tree(root->right);
}


int sum_replacement(node*root)
{
    if(root==NULL)
    return 0;

    else if(root->right==NULL and root->left==NULL)
    return root->data;

    // recursive part

    int leftsum=sum_replacement(root->left);
    int rightsum=sum_replacement(root->right);

    int temp=root->data;
    root->data=leftsum+rightsum;
    return temp+leftsum+rightsum;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node*root;
    root=build_binary_tree();

    print_binary_tree(root);

    sum_replacement(root);
    cout<<endl;

    print_binary_tree(root);
    return 0;
}