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
     
void solve(){
    int n,k;
    cin >> n >> k;
    vi arr(n);
    fill_vector(arr,k);
    deque<int> q;
    int i = 0;
    int j = 0;
    vi ans;
    // 1 3 -1 -3 5 3 6 7
    while(j<n){
        while(!q.empty() and q.back()<arr[j])q.pop_back();
        q.push_back(arr[j]);
        if(j-i+1==k){
            ans.pb(q.front());
            if(arr[i]==q.front())q.pop_front();
            i++;
        }
        j++;
    }
    for(auto i:ans)cout<<i<<" ";

}
     
int main(){
    solve();
    return 0;
}