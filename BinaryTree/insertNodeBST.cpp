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

Node* insertIntoBST(Node* root,int val){
    if(!root)return new Node(val);
    Node* cur = root;
    while(1){
        if(cur->val <= val){
            if(cur->right) cur = cur->right;
            else{
                cur->right = new Node(val);
                break;
            }
        }else{
            if(cur->left)cur = cur->left;
            else{
                cur->left = new Node(val);
                break;
            }
        }
    }
    return root;
}

//    4
//  2   6
// 1 3 5 7      
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