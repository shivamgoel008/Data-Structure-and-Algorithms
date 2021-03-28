
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test() ll t; cin>>t; while(t--)

class node
{
public:
    int data ;
    node*next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insert_node_at_head(node*&head,int d)
{
    if(head==NULL)
    {
        node*n=new node(d);
        head=n;
        return;
    }
    {
        node*n=new node(d);
        n->next=head;
        head=n;
    }
}


void insert_at_tail(int d,node*&head)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }

    node*temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    node*n=new node(d);
    temp->next=n;
}

void print_node(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}

void reverse(node*&head)
{
    node*current=head;
    node*prev=NULL;
    node*next;

    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;

        prev=current;
        current=next;
        // next=next->next;
    }

    head=prev;
}



int main ()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node*head=NULL;

    insert_at_tail(1,head);
    insert_at_tail(2,head);
    insert_at_tail(3,head);
    insert_at_tail(4,head);
    insert_at_tail(5,head);

    print_node(head);

    reverse(head);

    cout<<endl;

    print_node(head);
    
    return 0;
}