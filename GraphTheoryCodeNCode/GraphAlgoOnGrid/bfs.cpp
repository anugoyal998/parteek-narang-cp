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

vvi arr(100,vector<int>(100));
vvi vis(100,vector<int>(100,0));

void bfs(int srcX,int srcY){
    queue<pair<int,int> >q;
    q.push({srcX,srcY});
    vis[srcX][srcY] = 1;
    while(!q.empty()){
        int currX = q.front().first;
        int currY = q.front().second;
        q.pop();
        cout<<currX<<" "<<currY<<endl;
        vi v = {-1,0};
        for(auto i:v){
            for(auto j:v){
                if(isValid(currX+i,currY+j)){
                    int newX = currX + i;
                    int newY = currY + j;
                    vis[newX][newY] = 1;
                    q.push({newX,newY});
                    cout<<newX<<" "<<currY<<endl;
                }
            }
        }
    }
}

     
void solve(){    
    
}
     
int main(){
    solve();
    return 0;
}