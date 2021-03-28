#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

int cnt=0;
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

int count_no_of_nodes(node*root)
{
    if(root==NULL)
    return 0;

    cnt=cnt+count_no_of_nodes(root->left);
    cnt=cnt+count_no_of_nodes(root->right);

    return cnt++;
}

int sum_of_node(node*root)
{
    if(root==NULL)
    return 0;
    int sum=0;
    sum=root->data+sum_of_node(root->left);
    sum=sum+sum_of_node(root->right);
    return sum;

}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*root;
    root=build_binary_tree();

    print_binary_tree(root);

    cout<<endl;

    cout<<count_no_of_nodes(root)<<endl;

    cout<<sum_of_node(root);
    
    return 0;
}