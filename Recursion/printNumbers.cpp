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

void inc(int n){
    if(n==0) return;
    inc(n-1);
    cout<<n<<" ";
}

void dec(int n){
    if(n==0) return;
    cout<<n<<" ";
    dec(n-1);
}
     
void solve(){
    int n;
    cin >> n;
    inc(n);
    cout<<endl;
    dec(n);
}
     
int main(){
    solve();
    return 0;
}