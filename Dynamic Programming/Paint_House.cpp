#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll            long long int
#define endl          "\n"
#define MOD           1e9 + 7
#define test()        ll t; cin>>t; while(t--)
#define ordered_set   tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>



class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } 
            else 
            {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
        if(root->data<v1 && root->data<v2)
        return lca(root->right,v1,v2);
        
        if(root->data>v1 and root->data>v2)
        return lca(root->left,v1,v2);
        
        return root;
    }

}; 

string fun(string arr[],int n)
{
    int i;
    Solution myTree;
    Node* root = NULL;
    for(i=0;i<n-2;i++)
    {
        int x=stoi(arr[i]);
        root=myTree.insert(root,x);
    }

    int v1=stoi(arr[n-2]);
    int v2=stoi(arr[n-1]);

    Node *ans = myTree.lca(root, v1, v2);

    string fin_ans=to_string(ans->data);

    return fin_ans;
}

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}