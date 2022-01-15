#include<bits/stdc++.h>
using namespace std;
#define nline cout<<endl;
#define ll long long int
#define loop(i,st,n) for(int i=st;i<n;i++)
#define mod 1000000007
#define maxN 1000001
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define print_arr(arr) for(auto i:arr)cout<<i<<' ';
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}

struct Node{
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

//    4
//  2   6
// 1 3 5 7      

Node* findLastRight(Node* root){
    if(root->right == NULL)return root;
    return findLastRight(root->right);
}

Node* helper(Node* root){
    if(!root->left)return root->right;
    else if(!root->right)return root->left;
    Node* rightChild = root->right;
    Node* lastRight = findLastRight(root->left);
    lastRight->right = rightChild;
    return root->left;
}

Node* deleteNode(Node* root,int key){
    if(!root)return NULL;
    if(root->val == key){
        return helper(root);
    }
    Node* dummy = root;
    while(root){
        if(root->val > key){
            if(root->left && root->left->val == key){
                root->left = helper(root->left);
                break;
            }else root = root->left;
        }else{
            if(root->right && root->right->val == key){
                root->right = helper(root->right);
                break;
            }else root = root->right;
        }
    }
    return dummy;
}

void solve(){
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);
}

     
int main(){
    solve();
    return 0;
}