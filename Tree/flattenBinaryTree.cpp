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

void flatten(Node* &root){
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* curr = st.top();
        st.pop();
        if(curr->right){
            st.push(curr->right);
        }
        if(curr->left){
            st.push(curr->left);
        }
        if(!st.empty()){
            curr->right = st.top();
        }
        curr->left = NULL;
    }
}

void print_ll(Node* root){
    while(root){
        cout<<root->val<<" ";
        root = root->right;
    }
}

//    1
//  2   3
// 4 5 6 7     
void solve(){
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    flatten(root);
    print_ll(root);
}

     
int main(){
    solve();
    return 0;
}