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

struct node{
    int u,v,wt;
public:
    node(int u,int v,int wt){
        this->u=u;this->v=v;this->wt;
    }
};

bool comp(node a,node b){
    return a.wt < b.wt;
}

int findPar(int u,vi &parent){
    if(u == parent[u])return u;
    return findPar(parent[u],parent);
}

void unionn(int u,int v,vi &parent,vi &rank){
    u = findPar(u,parent);
    v = findPar(v,parent);
    if(rank[u] < rank[v]){
        parent[u] = v;
    }else if(rank[u] > rank[v]){
        parent[v] = u;
    }else{
        parent[v] = u;
        rank[u]++;
    }
}


     
void solve(){
    int n,m;
    cin >> n >> m;
    vector<node> edges;
    loop(i,0,m){
        int u,v,wt;
        cin >> u >> v >> wt;
        edges.pb(node(u,v,wt));
    }
    sort(edges.begin(),edges.end(),comp);
    vi parent[n];
    loop(i,0,n){
        parent[i] = i;
    }
    vi rank(n,0);
    int cost = 0;
    vector<pair<int,int>> mst;
    for(auto it : edges){
        if(findPar(it.v,parent) != findPar(it.u,parent)){
            cost += it.wt;
            mst.pb({it.u,it.v});
            unionn(it.u,it.v,parent,rank);
        }
    }
    cout<<cost<<endl;
    for(auto it : mst){
        cout<<it.first<<' '<<it.second<<endl;
    }
}
     
int main(){
    solve();
    return 0;
}