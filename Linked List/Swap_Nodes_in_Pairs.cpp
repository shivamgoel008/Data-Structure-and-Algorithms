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

void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}

// method of swapping the nodes 
node*solve(node*head)
{
    if(head==NULL)
    return head;

    if(head->next==NULL)
    return head;

    node*first=head;
    node*ans=first->next;

    while(1)
    {
        node*second=first->next;
        node*temp=second->next;
        second->next=first;

        if(temp==NULL or temp->next==NULL)
        {
            first->next=temp;
            break;
        }

        first->next=temp->next;
        first=temp;
    }

    return ans;
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
    insertion_at_end(head,2);
    // insertion_at_end(head,3);
    // insertion_at_end(head,4);

    print(head);
    cout<<endl;

    print(solve(head));
    
    return 0;
}