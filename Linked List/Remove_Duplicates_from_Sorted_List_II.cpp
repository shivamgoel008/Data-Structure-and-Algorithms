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

    node* deleteDuplicates(node* head) {
        
        node*dummy=new node(-400);
        node*prev=dummy;
        dummy->next=head;
        
        while(head!=NULL){
            if(head->next!=NULL){
                if(head->data==head->next->data){
                    while(head->data==head->next->data){
                        head=head->next;
                        if(head->next==NULL){
                            break;
                        }
                    }
                    // cout<<head->val;
                    prev->next=head->next;
                    // prev=head;
                    head=head->next;
                }
                else {
                head=head->next;
                prev=prev->next;
            }
            }
            else
                head=head->next;
            
        }
        return dummy->next;
        
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
    

    node*head=NULL;
    node*temp=NULL;
    insertion_at_end(head,1);
    insertion_at_end(head,1);
    insertion_at_end(head,3);

    head=deleteDuplicates(head);

    print(head);

    return 0;
}