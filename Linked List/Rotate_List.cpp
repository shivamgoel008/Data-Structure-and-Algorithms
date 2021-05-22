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


node*solve(node*head,int k)
{
    int cnt=0;
        
        if(k==0)
            return head;
        
        if(head==NULL)
            return NULL;
        
        if(head->next==NULL)
            return head;
        
        node*temp=head;
        while(temp->next){
            cnt++;
            temp=temp->next;
        }
        cnt++;
        
        
        // important condition and must revise 
        if(k>=cnt){
            
            k=k%cnt;
        }
        
        if(k==0)
            return head;
        node*gandu=head;
        int n=0;
        while(n<cnt-k-1){
            n++;
            gandu=gandu->next;
        }
        
        cout<<temp->data<<endl;
        cout<<gandu->data<<endl;
        
        
        node*ans= gandu->next;
        gandu->next=NULL;
        temp->next=head;
        
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


    int n;
    cin>>n;

    print(head);
    cout<<endl;

    print(solve(head,n));
    
    return 0;
}