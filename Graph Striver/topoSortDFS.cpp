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
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}

void dfs(vvi arr,int src,vi &vis,stack<int> &st){
    vis[src] = 1;
    for(auto i:arr[src]){
        if(!vis[i]){
            dfs(arr,i,vis,st);
        }
    }
    st.push(src);
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    vvi arr(n);
    loop(i,0,m){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        // arr[b].push_back(a);
    }
    vi vis(n,0);
    stack<int> st;
    loop(i,0,n){
        if(!vis[i]){
            dfs(arr,i,vis,st);
        }
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}
     
int main(){
    solve();
    return 0;
}