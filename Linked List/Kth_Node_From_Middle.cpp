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


int solve(node*head,int k)
{
    int cnt=0;
    node*temp=head;

    while(temp)
    {
        cnt++;
        temp=temp->next;
    }
    int mid=cnt/2+1,n=0;

    if(mid-k<=0)
    return -1;

    if(mid-k==0)
    return head->data;

    while(n<mid-k-1)
    {
        n++;
        head=head->next;

    }

    // cout<<head->data<<endl;

    return head->data;
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
    insertion_at_end(head,3);
    insertion_at_end(head,4);
    insertion_at_end(head,7);
    insertion_at_end(head,5);
    insertion_at_end(head,6);
    insertion_at_end(head,16);
    insertion_at_end(head,15);
    insertion_at_end(head,61);
    insertion_at_end(head,16);


    int n;
    cin>>n;

    print(head);
    cout<<endl;

    cout<<(solve(head,n));
    return 0;
}