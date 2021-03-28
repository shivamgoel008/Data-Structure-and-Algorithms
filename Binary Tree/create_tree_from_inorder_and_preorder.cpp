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

node*build_tree_inorder_preorder(int *in,int *pre,int start,int end)
{
    static int i=0;
    // base case
    if(start>end)
    return NULL;

    // recurring case
    node*root=new node(pre[i]);
    int index=-1;

    for(int j=start;j<=end;j++)
    {
        if(in[j]==pre[i])
        {
            index=j;
            break;
        }
    }
    i++;
    root->left=build_tree_inorder_preorder(in,pre,start,index-1);
    root->right=build_tree_inorder_preorder(in,pre,index+1,end);

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

    int in[]={3,2,8,4,1,6,7,5};
    int pre[]={1,2,3,4,8,5,6,7};
    
    node*root;

    int n=sizeof(in)/sizeof(in[0]);

    root=build_tree_inorder_preorder(in,pre,0,n-1);

    int h=height_of_binary_tree(root);
    
    for(int i=1;i<=h;i++)
    {
        print_kth_level(root,i);
        cout<<endl;
    }

    return 0;
}