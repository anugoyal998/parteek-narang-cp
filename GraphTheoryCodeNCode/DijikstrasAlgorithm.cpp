#include "bits/stdc++.h"
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

vector<pair<int,int>> adj[1001];
     
void solve(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].pb({b,w});
        adj[b].pb({a,w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
    vi dist(n+1,mod);
    pq.push({0,1}); // dist, node
    dist[1] = 0;
    while(!pq.empty()){
        int curr = pq.top().second;
        int curr_d = pq.top().first;
        pq.pop();
        for(auto edge : adj[curr]){
            if(curr_d + edge.second < dist[edge.first]){
                dist[edge.first] = curr_d + edge.second;
                pq.push({dist[edge.first], edge.first});
            }
        }
    }
    loop(i,1,n+1){
        cout<<dist[i]<<" ";
    }
}
     
int main(){
    solve();
    return 0;
}