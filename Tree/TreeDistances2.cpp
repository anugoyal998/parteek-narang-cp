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

vi ar[200001];
ll res[200001];
int subSize[200001];
ll subDist[200001];
int n;

void dfs1(int node,int par){
    subSize[node] = 1;
    for(auto child: ar[node]){
        if(child != par){
            dfs1(child,node);
            subSize[node] += subSize[child];
            subDist[node] += subDist[child] + subSize[child];
        }
    }
}

void dfs(int node,int par){
    res[node] = res[par] - subSize[node] - subDist[node] + n - subSize[node] + subDist[node];
    for(auto child : ar[node]){
        if(child != par){
            dfs(child,node);
        }
    }
}
     
void solve(){
    // problem: https://cses.fi/problemset/task/1133/
    // Re-Rooting DP
    cin >> n;
    loop(i,1,n){
        int a,b;
        cin>>a>>b;
        ar[a].pb(b);
        ar[b].pb(a);
    }
    dfs1(0,-1);
    res[0] = subDist[0];
    for(auto child: ar[0]){
        dfs(child,0);
    }
    loop(i,0,n){
        cout<<res[i]<<" ";
    }
}
     
int main(){
    solve();
    return 0;
}