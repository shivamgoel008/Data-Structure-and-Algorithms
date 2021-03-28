
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

void merge(node*head1,node*head2,node*&head3)
{
    if(head2==NULL)
    {
        head3=head1;
        return;
    }

    if(head1==NULL)
    {
        head3=head2;
        return;
    }
    
    while(head2!=NULL or head1!=NULL)
    {

        // if(head2==NULL)
        // {
        //     insert_at_tail(head1->data,head3);
        //     head1=head1->next;
        // }

        // else if(head1==NULL)
        // {
        //     insert_at_tail(head2->data,head3);
        //     head2=head2->next;
        // }
        if(head2->data>=head1->data)
        {
            insert_at_tail(head1->data,head3);
            head1=head1->next;
        }

        else if(head2->data<head1->data)
        {
            insert_at_tail(head2->data,head3);
            head2=head2->next;
        }
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

    
    node*head1=NULL;
    node*head2=NULL;
    node*head3=NULL;

    insert_at_tail(1,head1);
    insert_at_tail(3,head1);
    insert_at_tail(5,head1);
    insert_at_tail(7,head1);
    insert_at_tail(9,head1);

    insert_at_tail(2,head2);
    insert_at_tail(4,head2);
    insert_at_tail(6,head2);
    insert_at_tail(8,head2);
    insert_at_tail(10,head2);

    

    print_node(head1);
    cout<<endl;
    print_node(head2);
    cout<<endl;
    merge(head1,head2,head3);
    print_node(head3);

    return 0;
}