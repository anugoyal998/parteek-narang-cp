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

string serialize(Node* root){
    if(!root) return "";
    string s = "";
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curNode = q.front();
        q.pop();
        if(!curNode)s.append("#,");
        else s.append(to_string(curNode->val)+',');
        if(curNode){
            q.push(curNode->left);
            q.push(curNode->right);
        }
    }
    cout<<s;nline
    return s;
}

Node* deserialize(string data){
    if(data.size()==0)return NULL;
    stringstream s(data);
    string str;
    getline(s,str,',');
    Node* root = new Node(stoi(str));
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#"){
            node->left = NULL;
        }else{
            Node* leftNode = new Node(stoi(str));
            node->left = leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str=="#"){
            node->right = NULL;
        }else{
            Node* rightNode = new Node(stoi(str));
            node->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void in(Node* root){
    if(!root) return;
    in(root->left);
    cout<<root->val<<" ";
    in(root->right);
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
    string s = serialize(root);
    cout<<s<<endl;
    Node* tree = deserialize(s);
    in(tree);
}

     
int main(){
    solve();
    return 0;
}