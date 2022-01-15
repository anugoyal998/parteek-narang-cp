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

int widthOfBinaryTree(Node* root){
    if(!root) return 0;
    int ans = 0;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int size = q.size();
        int min = q.front().second;
        int first,last;
        for(int i=0;i<size;i++){
            int cur_id = q.front().second - min;
            Node* node = q.front().first;
            q.pop();
            if(i==0)first = cur_id;
            if(i==size-1)last = cur_id;
            if(node->left)q.push({node->left,cur_id*2+1});
            if(node->right)q.push({node->right,cur_id*2+2});
        }
        ans = max(ans,last-first+1);
    }
    return ans;
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
    cout<<widthOfBinaryTree(root);
}

     
int main(){
    solve();
    return 0;
}