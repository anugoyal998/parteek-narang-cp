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
    ll n,w;
    cin >> n >> w;
    vector<pair<ll,ll>> arr; // w v
    loop(i,0,n){
        ll a,b;
        cin>> a >> b;
        arr.pb({b,a});
    }
    vector<pair<ll,ll>> dp(n);
    dp[0].first = arr[0].first;
    dp[0].second = w - arr[0].second;
    loop(i,1,n){
        ll maxe = INT_MIN;
        ll wt = 0;
        loop(j,0,i){
            if(dp[j].second >= arr[i].second){
                if(dp[j].first > maxe){
                    maxe = dp[j].first;
                    wt = dp[j].second - arr[i].second;
                }
                if(dp[j].first == maxe){
                    ll diff = dp[j].second - arr[i].second;
                    wt = max(wt,diff);
                }
            }
        }
        dp[i].first = maxe + arr[i].first;
        dp[i].second = wt;
    }
    ll ans = INT_MIN;
    for(auto i:dp){
        ans = max(ans,i.first);
    }
    cout<<ans<<endl;

}
     
int main(){
    solve();
    return 0;
}