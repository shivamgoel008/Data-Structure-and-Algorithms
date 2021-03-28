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

int height(node*root)
{
    if(root==NULL)
    return 0;

    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}

void print (node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

int diameter_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int h1=height(root->left);
    int h2=height(root->right);
    int opt1=h1+h2;
    int opt2=diameter_of_binary_tree(root->left);
    int opt3=diameter_of_binary_tree(root->right);

    return max(opt1,max(opt3,opt2));
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root;
    root=build_binary_tree();

    diameter_of_binary_tree(root);
    print(root);

    cout<<endl;

    cout<<height(root);
    
    return 0;
}