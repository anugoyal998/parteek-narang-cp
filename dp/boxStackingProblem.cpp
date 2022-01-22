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
    int n;
    cin >> n;
    vvi arr(n,vi(3));
    loop(i,0,n){
        loop(j,0,3){
            cin>>arr[i][j];
        }
    }
    // w d h
    vi dp(n,0);
    dp[0] = arr[0][2];
    loop(i,1,n){
        int maxe = 0;
        loop(j,0,i){
            if(arr[i][0]>arr[j][0] and arr[i][1]>arr[j][1] and arr[i][2]>arr[j][2]){
                maxe = max(maxe,dp[j]);
            }
        }
        dp[i] = maxe + arr[i][2];
    }
    int ans = *max_element(dp.begin(),dp.end());
    print_arr(dp);
    nline
    cout<<ans<<endl;
}
     
int main(){
    solve();
    return 0;
}