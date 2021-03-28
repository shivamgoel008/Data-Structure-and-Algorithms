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
    node*next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void circular_push(node*&head,int data)
{
    if(head==NULL)
    {
        node*n=new node(data);
        head=n;
        n->next=head;
    }

    else 
    {
        node*temp=head;
        node*n=new node(data);
        n->next=NULL;
        while(temp->next!=head)
        {
            temp=temp->next;  
        }

        temp->next=n;
        head=n;
    }
}


void LL_print(node*head)
{
    while(head->next!=head)
    {
        cout<<head->data<<" ";
    }
    cout<<head->data;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node*head=NULL;

    circular_push(head,10);
    circular_push(head,20);
    circular_push(head,30);
    circular_push(head,40);
    circular_push(head,50);
    LL_print(head);
    return 0;
}