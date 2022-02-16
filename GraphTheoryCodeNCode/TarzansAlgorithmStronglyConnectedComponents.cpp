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

vi g[1001];
bool vis[1001], onStack[1001];
int in[1001], low[1001];
stack<int> st;

int timer = 1, SCC = 0;

void dfs(int node){
    vis[node] = 1;
    in[node] = low[node] = timer++;
    onStack[node] = true;
    st.push(node);
    for(int u : g[node]){
        if((vis[u] == true) && (onStack[u] == true)){
            low[node] = min(low[node], in[u]);
        }else if(vis[u] == false){
            dfs(u);
            if(onStack[u] == true){
                low[node] = min(low[node],low[u]);
            }
        }
    }
    if(in[node] == low[node]){
        SCC++;
        cout<<"SCC #"<<SCC<<endl;
        int u;
        while(1){
            u = st.top();
            st.pop(), onStack[u] = false;
            cout<<u<<" ";
            if(u==node)break;
        }
        nline
    }
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    loop(i,0,m){
        int a,b;
        cin>>a>>b;
        g[a].pb(b);
    }
    loop(i,0,n){
        vis[i] = onStack[i] = false;
    }
    loop(i,0,n){
        if(vis[i] == false) {
            dfs(i);
        }
    }
}
     
int main(){
    solve();
    return 0;
}