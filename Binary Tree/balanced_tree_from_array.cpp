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

node*build_balanced_tree(int *a,int start,int end)
{
    if(start>end)
    return NULL;

    int mid=(start+end)/2;
    node*root=new node(a[mid]);

    root->left=build_balanced_tree(a,start,mid-1);
    root->right=build_balanced_tree(a,mid+1,end);

    return root;
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
int height_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=height_of_binary_tree(root->left);
    int rs=height_of_binary_tree(root->right);

    return max(ls,rs)+1;
}


void print_binary_tree(node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    print_binary_tree(root->left);
    print_binary_tree(root->right);
}

 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,i;
    cin>>n;

    int a[n];

    fo(i,n)
    cin>>a[i];

    node*root;

    root=build_balanced_tree(a,0,n-1);

    print_binary_tree(root);
    cout<<endl;
    int h=height_of_binary_tree(root);

    for(i=1;i<=h;i++)
    {
        print_kth_level(root,i);
        cout<<endl;
    }

    return 0;
}