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


node* solve(node*head)
{
    node*start=new node(0);
    start->next=head;

    node*curr=head;
    node*prev=start;

    while(curr!=NULL)
    {
        if(curr->next!=NULL and curr->next->data<curr->data)
        {
            
            // curr->next=curr->next->next;

            while(prev->next!=NULL and (prev->next->data<curr->next->data))
            {
                prev=prev->next;
            }

            node*temp=prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=temp;
            prev=start;
        }

        else 
        {
            curr=curr->next; 
        }// dont need to do anything 

        
        // prev=prev->next;
    }

    return start->next;
}

void print(node*head)
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
    // test()
    {
        node*head=NULL;
        // node*temp=NULL;
        insertion_at_end(head,4);
        insertion_at_end(head,2);
        insertion_at_end(head,1);
        insertion_at_end(head,3);
        // insertion_at_end(head,0);
     

        print(head);

        cout<<endl;


        node*temp=solve(head);

        print(temp);
        
    }
    return 0;
}