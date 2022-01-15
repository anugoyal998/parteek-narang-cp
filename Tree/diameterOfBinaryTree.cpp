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

pair<int,int> diameter(Node* root){
    pair<int,int> p = {0,0};
    if(root == NULL){
        return p;
    }
    pair<int,int> l = diameter(root->left);
    pair<int,int> r = diameter(root->right);
    p.first = max(l.first,r.first);
    p.first = max(p.first,l.second+r.second);
    p.second = max(l.second,r.second) + 1;
    return p;
}

//    1
//  2   3
// 4 5 6 7     
void solve(){
    // Diameter: Longest path b/w 2 nodes. The path needn't 
    // to be pass through root
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    pair<int,int> ans = diameter(root);
    cout<<ans.first<<" "<<ans.second<<endl;
}

     
int main(){
    solve();
    return 0;
}