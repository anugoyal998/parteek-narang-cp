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

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
     
void solve(){
    // gcd complexity --> log(n)
    int a,b;
    cin >> a >> b;
    cout<<gcd(a,b)<<endl; 
}
     
int main(){
    solve();
    return 0;
}