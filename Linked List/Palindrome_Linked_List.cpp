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
    node*next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};


node* reverList(node*head)
{
    node*pre=NULL;
    node*next=NULL;

    while(head!=NULL)
    {
        next=head->next;
        head->next=pre;
        pre=head;
        head=next;
    }

    return pre;
}


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


bool solve(node*head)
{
    if(head==NULL or head->next==NULL)
    return true;

    // to find the middle of the linked list to reverse the half of the part 
    node*slow=head;
    node*fast=head;

    while(fast->next!=NULL and fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }

    // cout<<slow->data<<endl;
    // cout<<fast->data<<endl;

    slow->next=reverList(slow->next);

    print(head);

    cout<<endl;

    // cout<<slow->data<<endl;

    slow=slow->next;

    while(slow)
    {
        if(head->data!=slow->data)
        return false;

        slow=slow->next;
        head=head->next;

    }

    return true;
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
       
    insertion_at_end(head,1);
    insertion_at_end(head,0);
    insertion_at_end(head,0);
    insertion_at_end(head,1);  
    // insertion_at_end(head,5);    

    print(head);

    cout<<endl;

    cout<<solve(head);
    return 0;
}

