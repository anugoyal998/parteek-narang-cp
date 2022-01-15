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

bool check_sorted(vi arr,int n){
    // base case
    if(n==1 || n==0) return true;
    // rec case
    if(arr[1]<arr[0])return false;
    arr.erase(arr.begin());
    return check_sorted(arr,n-1);
}
     
void solve(){
    int n;
    cin >> n;
    vi arr(n);
    fill_vector(arr,n);
    cout<<check_sorted(arr,n)<<endl;
}
     
int main(){
    solve();
    return 0;
}