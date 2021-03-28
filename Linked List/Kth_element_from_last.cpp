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

void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
 

void insert_node(node*&head)
{
    int data;
    cin>>data;
    while(data!=-1)
    {
        insertion_at_end(head,data);
        cin>>data;
    }
} 

void Kth_node_from_last(node*head,int k)
{
    node*fast=head,*slow=head;
    int l=0;
    while(l<k)
    {
        fast=fast->next;
        l++;
    }

    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*head=NULL;
    int k;

    insert_node(head);
    print(head);
    
    cin>>k;

    cout<<endl;
    Kth_node_from_last(head,k);

    return 0;
}