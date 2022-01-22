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
    vi arr(n);
    fill_vector(arr,n);
    vi dp(n,1);
    loop(i,1,n){
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
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