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

int fact(int n){
    // base case
    if(n==0)return 1;
    // rec case
    int ans = n * fact(n-1);
    return ans; 
}
     
void solve(){
    int n;
    cin >> n;
    cout<<fact(n)<<endl;
    
}
     
int main(){
    solve();
    return 0;
}