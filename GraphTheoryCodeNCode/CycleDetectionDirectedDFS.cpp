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
#define print_arr(arr,st,ed) for(int i=st;i<ed;i++)cout<<arr[i]<<' ';
 
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

bool dfs(int node){
    vis[node] = 1;
    for(auto v:ar[node]){
        if(!vis[v]){
            if(dfs(v))return true;
        }else if(vis[v]==1)return true;
    }
    vis[node] = 2;
    return false;
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    fill_graph(ar,m,false);
    cout<<dfs(1);

}
     
int main(){
    solve();
    return 0;
}