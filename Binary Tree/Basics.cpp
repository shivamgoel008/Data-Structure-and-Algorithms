#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

bool compare(ll a,ll b)
{
    return a<b;
}


class node
{
    public:

    int data;
    node*left;
    node*right;

    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};


node*buildTree()
{
    int d;
    cin>>d;

    if(d==-1)
    return NULL;

    node*root=new node(d);

    root->left=buildTree();
    root->right=buildTree();

    return root;
}

void PreorderPrint(node*root)
{
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    PreorderPrint(root->left);
    PreorderPrint(root->right);
}

void InorderPrint(node*root)
{
    if(root==NULL)
    return;

    InorderPrint(root->left);
    cout<<root->data<<" ";
    InorderPrint(root->right);
}

void PostorderPrint(node*root)
{
    if(root==NULL)
    return;

    PostorderPrint(root->left);
    cout<<root->data<<" ";
    PostorderPrint(root->right);
}


int heightOfTree(node*root)
{
    if(root==NULL)
    return 0;

    int ls=heightOfTree(root->left);
    int rs=heightOfTree(root->right);

    return max(ls,rs)+1;
}


void printKthLevel(node*root,int k)
{
    if(root==NULL)
    return ;

    else if(k==1)
    cout<<root->data<<" ";

    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);

    return ;
}

void BFS(node*root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        if(q.front()==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            q.push(NULL);
        }

        else 
        {
            cout<<q.front()->data<<" ";

            if(q.front()->left)
            q.push(q.front()->left);

            if(q.front()->right)
            q.push(q.front()->right);

            q.pop();

        }
        
    }
    return;
}




int NumberOfNodes(node*root)
{
    if(root==NULL)
    return 0;

    int ls=NumberOfNodes(root->left);
    int rs=NumberOfNodes(root->right);

    return ls+rs+1;
}

int SumOfNodes(node*root)
{
    if(root==NULL)
    return 0;

    int ls=SumOfNodes(root->left);
    int rs=SumOfNodes(root->right);

    return ls+rs+root->data;
}


int DiameterOfTree(node*root)
{
    if(root==NULL)
    return 0;

    int option1=heightOfTree(root->left)+heightOfTree(root->right);

    int option2=DiameterOfTree(root->left);

    int option3=DiameterOfTree(root->right);

    return max(option1,max(option2,option3));
}


int sumReplcement(node*root)
{
    if(root==NULL)
    return 0; 

    if(root->left==NULL and root->right==NULL)
    return root->data;

    int leftsum=sumReplcement(root->left);
    int rightsum=sumReplcement(root->right);

    root->data=leftsum+rightsum;

    return root->data+leftsum+rightsum;
}


class HBPair{
    public:
    int height;
    bool balance;
};

HBPair isHeightBalanced(node*root)
{
    HBPair p;
    if(root==NULL)
    {
        p.height=0;
        p.balance=true;
        return p;
    }

    HBPair left= isHeightBalanced(root->left);
    HBPair right=isHeightBalanced(root->right);

    p.height=max(left.height,right.height)+1;

    if(abs(left.height-right.height)<=1 and left.balance==true and right.balance==true)
    {
        p.balance=true;
    }

    else 
    p.balance=false;
    return p;
}

node* buildBalancedTreeFromArray(int *a,int s,int e)
{
    if(s>e)
    return NULL;

    int mid=(s+e)/2;

    node* root=new node(a[mid]);

    root->left=buildBalancedTreeFromArray(a,s,mid-1);
    root->right=buildBalancedTreeFromArray(a,mid+1,e);

    return root;
}


// build tree when preorder and inorder is given
node*Preorder_and_Inorder(int inorder[],int preorder[],int s,int e)
{
    static int i=0;

    if(s>e)
    return NULL;

    // recurrsive case
    node*root= new node(preorder[i]);

    int index=-1;

    for(int j=s;j<=e;j++)
    {
        if(inorder[j]==preorder[i])
        {
            index=j;
            break;
        }
    }

    i++;

    root->left= Preorder_and_Inorder(inorder,preorder,s,index-1);
    root->right=Preorder_and_Inorder(inorder,preorder,index+1,e);

    return root;
}
int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    // test()
    // {
    //     ll i,j,n;
    // }

    node*root=buildTree();

    cout<<"Preorder Print: ";
    PreorderPrint(root);
    cout<<endl;

    cout<<"Inorder Print: ";
    InorderPrint(root);
    cout<<endl;

    cout<<"Postorder Print: ";
    PostorderPrint(root);
    cout<<endl;

    cout<<"Height Of tree: ";
    cout<<heightOfTree(root)<<endl;
    
    cout<<"Printing Kth Level: ";printKthLevel(root,2);

    cout<<endl;


    // complexity of worst case is O(n^2) // important 
    cout<<"Printing all the levels of tree OR (Level Order Print): "<<endl;
    for(int i=1;i<=heightOfTree(root);i++)
    printKthLevel(root,i), cout<<endl;


    // BFS complexity O(n) used to print in level order
    cout<<"BFS Print of Tree: "<<endl;
    BFS(root);cout<<endl;

    cout<<"Number of nodes In Tree: "<<NumberOfNodes(root)<<endl;

    cout<<"Sum of nodes In Tree: "<<SumOfNodes(root)<<endl;


    // worst Case compleity is O(n^2)
    cout<<"Diameter Of tree: "<<DiameterOfTree(root)<<endl;


    // cout<<"Sum replacement: ";
    // cout<<endl;
    // sumReplcement(root);
    // BFS(root);
    

    if(isHeightBalanced(root).balance)
    cout<<"BALANCED"<<endl;

    else 
    cout<<"NOT BALANCED"<<endl;


    int a[]={1,2,3,4,5,6,7,8};
    node*temp=buildBalancedTreeFromArray(a,0,sizeof(a)/sizeof(int)-1);
    cout<<"Blanced Tree: "<<endl;
    BFS(temp);


    int inorder[]={3,2,8,4,1,6,7,5};
    int preorder[]={1,2,3,4,8,5,6,7};
    cout<<"Building Tree from inorder and preorder: "<<endl;
    BFS(Preorder_and_Inorder(inorder,preorder,0,sizeof(inorder)/sizeof(int)-1));
    
    return 0;
}