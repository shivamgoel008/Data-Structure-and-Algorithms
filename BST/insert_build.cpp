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

node*insert_in_BST(node*root,int data)
{
    // base case 
    if(root==NULL)
    return new node(data);

    // recuring case
    if(data<=root->data)
    root->left=insert_in_BST(root->left,data);

    else
    root->right=insert_in_BST(root->right,data);
    
    return root;
}

node*build()
{
    int d;
    cin>>d;

    node*root=NULL;

    while(d!=-1)
    {
        root=insert_in_BST(root,d);
        cin>>d;
    }
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


void print_kth_level(node*root,int k)
{
    if(root==NULL)
    return;

    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }

    print_kth_level(root->left,k-1);
    print_kth_level(root->right,k-1);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root=build();


    int h=height_of_binary_tree(root);

    cout<<endl;


    for(int i=1;i<=h;i++)
    {
        print_kth_level(root,i);
        cout<<endl;
    }   

    return 0;
}