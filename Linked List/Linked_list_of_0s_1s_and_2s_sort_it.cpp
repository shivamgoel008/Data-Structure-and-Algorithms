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

node* segregate(node *head) {
        
        int zero=0;
        int one=0;
        int two=0;
        
        node*temp=head;
        node*ans=head;
        while(temp!=NULL)
        {
            if(temp->data==0)
            zero++;
            
            else if(temp->data==1)
            one++;
            
            else if(temp->data==2)
            two++;
            
            temp=temp->next;
        }
        
        while(zero>0)
        {
            head->data=0;
            zero--;
            head=head->next;
        }
        
        while(one>0)
        {
            head->data=1;
            one--;
            head=head->next;
        }
        
        while(two>0)
        {
            head->data=2;
            two--;
            head=head->next;
        }
        
        return ans;
        
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
        ll i,j;

        node*head=NULL;
        node*temp=NULL;
        insertion_at_end(head,1);
        insertion_at_end(head,2);
        insertion_at_end(head,2);
        insertion_at_end(head,1);
        insertion_at_end(head,2);
        insertion_at_end(head,0);
        insertion_at_end(head,2);
        insertion_at_end(head,2);

        print(head);

        cout<<endl;

        node*ans=segregate(head);

        print(ans);
    }
    return 0;
}