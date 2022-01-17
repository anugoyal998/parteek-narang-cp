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

bool dfs(vvi arr,int src,int par,vector<bool> &vis){
    vis[src] = true;
    for(auto i:arr[src]){
        if(!vis[i]){
            if(dfs(arr,i,src,vis))return true;
        }else if(i != par)return true;
    }
    return false;
}
     
void solve(){
    int n,m;
    cin>>n>>m;
    vvi arr(n+1);
    loop(i,0,m){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    vector<bool> vis(n+1,false);
    loop(i,1,n+1){
        if(!vis[i]){
            if(dfs(arr,i,-1,vis)){
                cout<<"true"<<endl;
                return;
            }
        }
    }
}
     
int main(){
    solve();
    return 0;
}