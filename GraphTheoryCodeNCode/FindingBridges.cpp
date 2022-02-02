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

vi in(100001,0);
vi low(100001,0);
int timer = 0;

void dfs(int node,int par){
    vis[node] = 1;
    in[node] = low[node] = timer;
    timer++;
    for(auto child : ar[node]){
        if(child == par)continue;
        if(vis[child]){
            // edge node - child is a back edge
            low[node] = min(low[node],in[child]);
        }else{
            // edge node - child is forward edge
            dfs(child,node);
            if(low[child]>in[node]){
                cout<<node<<" -> "<<child<<" is a bridge\n";
            }
            low[node] = min(low[node],low[child]);
        }
    }
}

void solve(){
    int n,m;
    cin>>n>>m;
    fill_graph(ar,m);
    dfs(1,-1);
}
     
int main(){
    solve();
    return 0;
}