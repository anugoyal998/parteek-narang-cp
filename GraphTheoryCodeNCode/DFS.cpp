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

void dfs(vvi arr,int src,vi &vis){
    vis[src] = 1;
    cout<<src<<" ";
    for(auto i:arr[src]){
        if(!vis[i]){
            dfs(arr,i,vis);
        }
    }
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    vvi arr(n+1);
    fill_graph(arr,m);
    vi vis(n+1);
    loop(i,1,n+1){
        if(!vis[i]){
            dfs(arr,i,vis);
        }
    }

}
     
int main(){
    solve();
    return 0;
}