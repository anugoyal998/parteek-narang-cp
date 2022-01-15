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

//    1
//  2   3
// 4 5 6 7     

vector<int> getInorder(Node* root){
    vector<int> inorder;
    Node* cur = root;
    while(cur){
        if(!cur->left){
            inorder.push_back(cur->val);
            cur = cur->right;
        }else{
            Node* prev = cur->left;
            while(prev->right && prev->right != cur){
                prev = prev->right;
            }
            if(!prev->right){
                prev->right = cur;
                cur = cur->left;
            }else{
                prev->right = NULL;
                inorder.push_back(cur->val);
                cur = cur->right;
            }
        }
    }
    return inorder;
}

vector<int> getPreorder(Node* root){
    vector<int> preorder;
    Node* cur = root;
    while(cur){
        if(!cur->left){
            preorder.push_back(cur->val);
            cur = cur->right;
        }else{
            Node* prev = cur->left;
            while(prev->right && prev->right != cur){
                prev = prev->right;
            }
            if(!prev->right){
                prev->right = cur;
                preorder.push_back(cur->val);
                cur = cur->left;
            }else{
                prev->right = NULL;
                cur = cur->right;
            }
        }
    }
    return preorder;
}

void solve(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vi ans = getInorder(root);
    print_arr(ans);
    ans = getPreorder(root);
    nline
    print_arr(ans);
}
     
int main(){
    solve();
    return 0;
}