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

bool search(node*head,int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(key==temp->data)
        {
            return true;
            break;
        }

        else 
        temp=temp->next;
    }
    return false;
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
    insert_node_at_head(head,5);
    insert_node_at_head(head,4);
    insert_node_at_head(head,3);
    insert_node_at_head(head,2);
    insert_node_at_head(head,1);

    print_node(head);

    int key;
    cin>>key;

    if(search(head,key)==true)
    cout<<"\nfound";

    else 
    cout<<"\nnot found!!";

    return 0;
}