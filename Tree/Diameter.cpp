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
int f[200001];
int g[200001];
int d;

void dfs(int node,int par){
    vi childList;
    for(auto child : ar[node]){
        if(child != par){
            dfs(child,node);
            f[node] = max(f[node],1+f[child]);
            childList.push_back(f[child]);
        }
    }
    d = max(d,f[node]);
    sort(childList.begin(),childList.end());
    if(childList.size()>=2){
        g[node] = 2 + childList[childList.size()-1] + childList[childList.size()-2];
        d = max(d,g[node]);
    }
}
     
void solve(){
    // Problem Statement: https://cses.fi/problemset/task/1131
    int n;
    cin >> n;
    loop(i,1,n){
        int a,b;
        cin>>a>>b;
        ar[a].pb(b);
        ar[b].pb(a);
    }
    dfs(1,-1);
    cout<<d;
}
     
int main(){
    solve();
    return 0;
}