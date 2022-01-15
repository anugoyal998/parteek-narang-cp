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
    fill_vector(arr,n);
    int i = 0;
    int j = 0;
    int sum = 0;
    int ans = 0;
    while(j<n){
        if(j-i+1<k){
            sum += arr[j];j++;
        }else{
            sum += arr[j];
            ans = max(ans,sum);
            sum -= arr[i];
            i++;j++;
        }
    }
    cout<<ans<<endl;

}
     
int main(){
    solve();
    return 0;
}