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

int n,m;
vector<vector<bool>> vis(100,vector<bool>(100,false));

bool isValid(int x,int y){
    if(x<1 || y<1 || x>n || y>m)return false;
    return !vis[x][y];
}

void dfs(int x,int y){
    vis[x][y] = true;
    cout<<x<<" "<<y<<endl;
    vector<int> v = {-1,0};
    for(auto i:v){
        for(auto j:v){
            if(isValid(x+i,y+j)){
                dfs(x+i,y+j);
            }
        }
    }
}
     
void solve(){
    cin>>n>>m;
    int x = 1;
    int y = 1;
    dfs(1,1);
}
     
int main(){
    solve();
    return 0;
}