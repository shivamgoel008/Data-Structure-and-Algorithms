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

int height_of_binary_tree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=height_of_binary_tree(root->left);
    int rs=height_of_binary_tree(root->right);

    return max(ls,rs)+1;
}

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

void bfs(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            q.push(NULL);
        }

        else
        {
            cout<<f->data<<",";
            q.pop();
        
            if(f->left!=NULL)
            q.push(f->left);

            if(f->right!=NULL)
            q.push(f->right);
        }
    } 
}

void print_pre_order(node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    print_pre_order(root->left);
    print_pre_order(root->right);   
}


 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*root=NULL;
    root=build_binary_tree();

    bfs(root);
    return 0;
}