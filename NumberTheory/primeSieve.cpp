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

void sieve(){
    vector<ll> arr(maxN,0);
    arr[0] = arr[1] = 1;
    for(ll i=2;i*i<=maxN;i++){
        if(arr[i]==0){
            for(ll j=i*i;j<maxN;j+=i){
                arr[j] = 1;
            }
        }
    }
    for(ll i=0;i<maxN;i++){
        if(arr[i]==0)cout<<i<<" ";
    }
}
     
int main(){
    sieve();   
     return 0;
}