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

void insertion_at_end(node*&head,int data)
{
    if(head==NULL)
    {
        node*n=new node(data);
        head=n;
        return ;
    }                                                   
    else 
    {
        node*tail=head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=new node(data);
        return;
    }
}

void insert_node_at_head(node*&head,int data)
{
    node*n=new node(data);
    n->next=head;
    head=n; 
}



int length(node*head)
{
    int len=0;
    while(head->next!=NULL)
    {
        head=head->next;
        len++;
    }
    return len;
}

void insertion_at_nth_position(node*&head,int data,int position)
{
    if(head==NULL)
    insert_node_at_head(head,data);

    else if(position>length(head))
    insertion_at_end(head,data);

    else 
    {
        node*temp=head;
        int len=0;
        while(len<position-1)
        {
            temp=temp->next;
            len++;
        }

        node *n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
void print_node(node*head){
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node*head=NULL;
    insertion_at_end(head,1);
    insertion_at_end(head,2);
    insertion_at_end(head,4);
    insertion_at_end(head,4);

    insertion_at_nth_position(head,3,3);
    print_node(head);
    return 0;
}