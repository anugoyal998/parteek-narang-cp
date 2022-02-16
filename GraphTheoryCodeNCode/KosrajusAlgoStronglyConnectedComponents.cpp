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

vi ar[1001]; // adjaceny list
vi tr[1001]; // adjaceny list for transpose graph

vi order;
vi SCC;

int vis[1001];

void dfs(int node){
    vis[node] = 1;
    for(int child : ar[node]){
        if(vis[child] == 0){
            dfs(child);
        }
    }
    order.pb(node);
}

void dfs1(int node){
    vis[node] = 1;
    for(int child : ar[node]){
        if(vis[child] == 0){
            dfs1(child);
        }
    }
    SCC.pb(node);
}
     
void solve(){
    // DAG and condensation graph has at least 1 node with indegree 0
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // flush out
        loop(i,0,n){
            ar[i].clear();
            tr[i].clear();
            vis[i] = 0;
        }
        order.clear();
        loop(i,0,m){
            int a,b;
            cin>>a>>b;
            ar[a].pb(b);
            tr[b].pb(a);
        }
        loop(i,0,n){
            if(!vis[i]){
                dfs(i);
            }
        }
        loop(i,0,n)vis[i] = 0;
        loop(i,0,n){
            if(vis[order[n-i-1]] == 0){
                SCC.clear();
                dfs1(order[n-i-1]); 
                cout<<"dfs1() called from "<<order[n-1-i]<<" and printing SCC"<<endl;
                for(int node : SCC){
                    cout<<node<<" ";
                }
                cout<<endl;
            }
        }
    }
}
     
int main(){
    solve();
    return 0;
}