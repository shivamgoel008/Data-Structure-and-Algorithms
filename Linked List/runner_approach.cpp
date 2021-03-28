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

void mid_element(node*head)
{
    node*temp1=head,*temp2=head;
    while(temp1->next!=NULL || temp1->next->next!=NULL )
    {
        temp1=temp1->next;
        temp1=temp1->next;
        temp2=temp2->next;
    }

    cout<<temp2->data;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    node*head=NULL;
    insert_node(head);
    print(head);
    cout<<endl;
    mid_element(head);

    return 0;
}