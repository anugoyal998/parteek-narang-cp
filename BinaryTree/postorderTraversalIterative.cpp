#include<bits/stdc++.h>
using namespace std;
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

void postorder_traversal_iterative_2Stack(Node* root){
    if(!root) return;
    vi ans;
    stack<Node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left) st1.push(root->left);
        if(root->right) st1.push(root->right);
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    print_arr(ans);
}

void postorder_traversal_iterative_1Stack(Node* root){
    if(!root)return;
    vi ans;
    stack<Node*> st;
    Node* current = root;
    while(current || !st.empty()){
        if(current){
            st.push(current);
            current = current->left;
        }else{
            Node* temp = st.top()->right;
            if(!temp){
                temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                }
            }else{
                current = temp;
            }
        }
    }
    print_arr(ans);
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
    postorder_traversal_iterative_2Stack(root);
    postorder_traversal_iterative_1Stack(root);
}

     
int main(){
    solve();
    return 0;
}