
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

int length(node*head)
{
    ll cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }

    return cnt;
}

void insert_at_tail(node*&head,int d)
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

void insert_in_middle(node*&head,int d,int pos)
{
    if(head==NULL or pos==0)
    insert_node_at_head(head,d);

    else if(pos>length(head))
    insert_at_tail(head,d);

    else 
    {
        ll cnt=1;
        node*temp=head;
        while(cnt<=pos-1)
        {
            temp=temp->next;
            cnt++;
        }

        // node*nexp=temp->next;  
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }   
}



void print_node(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
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

    insert_node_at_head(head,5);
    insert_node_at_head(head,2);
    insert_node_at_head(head,1);
    insert_node_at_head(head,0);

    print_node(head);
    cout<<endl;

    insert_in_middle(head,4,3);
    insert_at_tail(head,7);

    cout<<length(head)<<endl;

    print_node(head);
    

    return 0;
}