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
#define print_arr(arr,st,ed) for(int i=st;i<ed;i++)cout<<arr[i]<<' ';
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

void dfs(int src){
    vis[src] = 1;
    for(auto i:ar[src]){
        if(!vis[i]){
            dfs(i);
        }
    }
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    fill_graph(ar,m);
    int ans = 0;
    loop(i,1,n+1){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout<<ans<<endl;

}
     
int main(){
    solve();
    return 0;
}