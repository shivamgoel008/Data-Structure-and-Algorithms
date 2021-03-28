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

node *buildtreeLevel()
{
    int d;
    cin>>d;
    queue<node *>q;
    node *root=new node(d);
    q.push(root);
    int c1,c2;
    while(!q.empty())
    {
        node *f=q.front();
        q.pop();
        cin>>c1>>c2;
        if(c1!=-1)
        {
            f->left=new node(c1);
            q.push(f->left);
        }
        if(c2!=-1)
        {
            f->right=new node(c2);
            q.push(f->right);
        }
    }
    return root;
}

void print_vertical_order(node*root,int d,map<int,vector<int>>&m)
{
    if(root==NULL)
    return;

    m[d].push_back(root->data);

    print_vertical_order(root->left,d-1,m);
    print_vertical_order(root->right,d+1,m);

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    node*root=buildtreeLevel();
    /*
    int h=height_of_binary_tree(root);

    cout<<endl;


    for(int i=1;i<=h;i++)
    {
        print_kth_level(root,i);
        cout<<endl;
    }
    */
    map<int,vector<int>>m;
    int d=0;

    print_vertical_order(root,d,m);

    for(auto i:m)
    {
        for(auto j:i.second)
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }

    return 0;
}