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

int height_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=height_of_binary_tree(root->left);
    int rs=height_of_binary_tree(root->right);

    return max(ls,rs)+1;
}

void print_right_view(node*root,int level,int &maxheight)
{
    if(root==NULL)
    return;

    level=height_of_binary_tree(root);

    if(maxheight<level)
    {
        cout<<root->data<<" ";
        maxheight=level;
    }

    print_right_view(root->right,level,maxheight);
    print_right_view(root->left,level,maxheight);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root;
    root=buildtree();
    int level,maxheight=-1;

    print_right_view(root,level,maxheight);

    return 0;
}