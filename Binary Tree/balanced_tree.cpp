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

int left_height_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=left_height_of_binary_tree(root->left);
    int rs=left_height_of_binary_tree(root->right);

    return ls+1;
}

int right_height_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=right_height_of_binary_tree(root->left);
    int rs=right_height_of_binary_tree(root->right);

    return rs+1;
}

void print_binary_tree(node*root)
{
    if(root==NULL)
    return ;

    cout<<root->data<<" ";
    print_binary_tree(root->left);
    print_binary_tree(root->right);
}

bool balanced_tree(node*root)
{
    if(root==NULL)
    return true;

    if(abs(right_height_of_binary_tree(root)-left_height_of_binary_tree(root)>1))
    return false;

    balanced_tree(root->left);
    balanced_tree(root->right);

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*root;
    root=build_binary_tree();
    print_binary_tree(root);
    cout<<endl;
    
    if(balanced_tree(root))
    cout<<"true"<<endl;

    else 
    cout<<"false"<<endl;

    return 0;
}