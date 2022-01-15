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

int count_string(int n){
    if(n==0)return 1;
    if(n==1)return 2;
    return count_string(n-1) + count_string(n-2);
}
     
void solve(){
    int n;
    cin >> n;
    cout<<count_string(n)<<endl;
}
     
int main(){
    solve();
    return 0;
}