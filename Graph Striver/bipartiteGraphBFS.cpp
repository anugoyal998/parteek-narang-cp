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

bool bfs(vvi arr,int src,vi &color){
    queue<int> q;
    q.push(src);
    color[src] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto i:arr[node]){
            if(color[i]==-1){
                color[i] = 1-color[node];
                q.push(i);
            }else if(color[i]==color[node]){
                return false;
            }
        }
    }
    return true;
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
    vi color(n+1,-1);
    loop(i,1,n+1){
        if(color[i]==-1){
            if(!bfs(arr,i,color)){
                cout<<"No"<<endl;
                return;
            }
        }
    }
    cout<<"Yes"<<endl;

}
     
int main(){
    solve();
    return 0;
}