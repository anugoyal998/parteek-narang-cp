#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,st,n) for(int i=st;i<n;i++)
#define nline cout<<endl;
#define mod 1000000007
#define maxN 1000001
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define print_arr(arr) for(auto i:arr)cout<<i<<' ';
#define print_vv(arr) for(auto i:arr){for(auto j:i)cout<<j<<' ';nline}
 
vvi ar(100001);
vi vis(100001,0);
     
void fill_vector(vi &arr,int n){
loop(i,0,n){
cin>>arr[i];
}
}
 
void fill_graph(vvi &arr,int m,bool undir=true){
while(m--){
int a,b;
cin>>a>>b;
arr[a].pb(b);
if(undir)arr[b].pb(a);
}
}

struct node{
    node *nxt[26];
    bool is_end;
    node(){
        loop(i,0,26)nxt[i] = NULL;
        is_end = false;
    }
};

node *root;

bool search_trie(string s){
    node* curr = root;
    loop(i,0,s.size()){
        int map = s[i]-'a';
        if(!curr->nxt[map])return false;
        curr = curr->nxt[map];
    } 
    return curr->is_end;
}

void insert_trie(string s){
    node* curr = root;
    loop(i,0,s.size()){
        int map = s[i]-'a';
        if(!curr->nxt[map]){
            curr->nxt[map] = new node();
        }
        curr = curr->nxt[map];
    }
    curr->is_end = true;
}
     
void solve(){
    int n;
    cin>>n;
    root = new node();
    loop(i,0,n){
        string s;
        cin>>s;
        insert_trie(s);
    }
    if(search_trie("apar")){
        cout<<"Found";
    }else cout<<"Not found";
}
     
int main(){
    solve();
    return 0;
}