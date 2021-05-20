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



// O(n+m) space and O(n+m) time approach 
node*solve(node* l1, node* l2)
{
    if(l1==NULL and l2==NULL)
        return NULL;
        
    if(l1==NULL)
        return l2;
        
    if(l2==NULL)
        return l1;
        
    node*dummy=new node(-200);
    node*ans=dummy;
        
    while(l1!=NULL and l2!=NULL){
        if(l1->data>=l2->data){
            dummy->next=l2;
            l2=l2->next;
        }
            
        else if(l1->data<l2->data){
            dummy->next=l1;
            l1=l1->next;
        }
            
        dummy=dummy->next;
    }
        
        
    if(l1!=NULL){
        while(l1!=NULL){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
        }
    }
        
    if(l2!=NULL){
        while(l2!=NULL){
            dummy->next=l2;
            l2=l2->next;
            dummy=dummy->next;
        }
    }
        
    return 
        ans->next;  
}


node*OptimizedMerge(node*l1,node*l2)
{
    if(l1==NULL)
    return l2;

    if(l2==NULL)
    return l1;

    // checking the first node if l2<l1 then we swap
    if(l1->data>l2->data)
    swap(l1,l2);

    // creating the ans pointer at the statrt
    node*ans=l1;

    while(l1!=NULL and l2!=NULL)
    {
        node*temp=NULL;
        while(l1!=NULL and l1->data<=l2->data)
        {
            temp=l1;
            l1=l1->next;
        }
        temp->next=l2;

        // again swapping 
        swap(l1,l2);
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


    node*head1=NULL;
    node*head2=NULL;

    insertion_at_end(head1,1);
    insertion_at_end(head1,1);
    insertion_at_end(head1,3);

    insertion_at_end(head2,1);
    insertion_at_end(head2,1);
    insertion_at_end(head2,3);


    print(head1);
    cout<<endl;
    print(head2);
    cout<<endl;

    // print(solve(head1,head2));

    cout<<endl;

    // print(OptimizedMerge(head1,head2));
    return 0;
}