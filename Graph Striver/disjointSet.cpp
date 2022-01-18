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

vi parent(maxN);
vi rank(maxN);

void makeSet(){
    loop(i,0,n){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findPar(int node){
    if(node == parent[node]){
        return node;
    }
    return parent[node] = findPar(parent[node]);
}

void Union(int u,int v){
    u = findPar(u);
    v = findPar(v);
    if(rank[u]<rank[v]){
        parent[u] = v;
    }else if(rank[u]>rank[v]){
        parent[v] = u;
    }else{
        parent[v] = u;
        rank[u]++;
    }
}
     
void solve(){
    makeSet();
    int m;
    cin >> m;
    while(m--){
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }
}
     
int main(){
    solve();
    return 0;
}