#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,st,n) for(int i=st;i<n;i++)
#define mod 1000000007
#define maxN 1000001
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}

int tile(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    return tile(n-4) + tile(n-1);
}
     
void solve(){
    // Given a "4 * n" board and tiles of size "4 * 1", count
    // the number of ways to tile the given using 4 * 1 tiles.
    // A tile can either be placed horizontally or vertically.
    int n;
    cin>>n;
    cout<<tile(n)<<endl;

}
     
int main(){
    solve();
    return 0;
}