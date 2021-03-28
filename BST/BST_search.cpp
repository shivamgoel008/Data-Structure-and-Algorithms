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
    if(root==NULL)
    return new node(data);

    else if(data<=root->data)
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


bool search_BST(node*root,int key)
{

    if(root->data==key)
    return true;

    if(root->data<key)
    search_BST(root->right,key);

    else
    search_BST(root->left,key);

    return false;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root=build();
    
    
    return 0;
}