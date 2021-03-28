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

void insert_node_at_head(node*&head,int data)
{
    node*n=new node(data);
    n->next=head;
    head=n;
}


void delete_node_at_head(node*&head)
{
    node*temp=head;
    head=head->next;
    delete(temp);
    return;
}

void delete_node_at_end(node*&head)
{
    node*temp=head,*prev;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return;
}

 void print_node(node*head){
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

}

void delete_at_nth_position(node*&head,int position)
{
    node *temp1=head,*temp2=head,*prev;
    int len1=0,len2=0;
    while(len1<position+1)
    {
        prev=temp1;
        temp1=temp1->next;
        len1++;
    }

    while(len2<position-1)
    {
        temp2=temp2->next;
        len2++;
    }
    
    temp2->next=temp1;
    delete prev;
   
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*head=NULL;

    insert_node_at_head(head,4);
    insert_node_at_head(head,3);
    insert_node_at_head(head,2);
    insert_node_at_head(head,1);
    print_node(head);cout<<endl;
    delete_at_nth_position(head,2);

    print_node(head);
    
    return 0;
}