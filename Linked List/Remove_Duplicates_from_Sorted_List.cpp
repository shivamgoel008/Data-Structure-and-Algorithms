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


node*solve(node*head)
{
    node*ans=new node(-200);
        ans->next=head;
        node*ptr=ans;
        
        while(ans->next!=NULL){
            if(ans->next!=NULL){
                if(ans->data==ans->next->data){
                    node*temp=ans;
                    while(temp!=NULL){
                        if(temp->data!=ans->data)
                            break;
                        temp=temp->next;
                    }
                    
                    ans->next=temp;
                }
                else 
                    ans=ans->next;
            }
            
            else 
                ans=ans->next;
        }
        
        return ptr->next;
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
    insertion_at_end(head,1);
    insertion_at_end(head,3);

    print(head);   
    print(solve(head));
    return 0;
}