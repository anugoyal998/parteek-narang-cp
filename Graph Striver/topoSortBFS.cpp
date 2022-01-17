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
     
void solve(){
    int n,m;
    cin>>n>>m;
    vvi arr(n);
    loop(i,0,m){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
        // arr[b].push_back(a);
    }
    queue<int> q;
    vi in(n,0);
    loop(i,0,n){
        for(auto j:arr[i]){
            in[i]++;
        }
    }
    loop(i,0,n){
        if(in[i]==0)q.push(i);
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(auto i:arr[node]){
            in[i]--;
            if(in[i]==0){
                q.push(i);
            }
        }
    }
}
     
int main(){
    solve();
    return 0;
}