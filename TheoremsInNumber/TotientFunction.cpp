#include<bits/stdc++.h>
using namespace std;
#define int long long int
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

const int N = 1e5;

void calculate_totient(){
    vector<bool> pr(N,true);
    vector<int> tot(N);
    for(int i=2;i<N;i++){
        for(int j=i*i;j<N;j+=i){
            pr[j] = false;
        }
    }
    iota(tot.begin(),tot.end(),0);
    for(int i=2;i<N;i++){
        if(pr[i]){
            for(int j=i;j<N;j+=i){
                tot[j] /= i;
                tot[j] *= (i-1);
            }
        }
    }
    loop(i,0,10)cout<<tot[i]<<" ";

}
     
void solve(){
    // Totient Function: Number of integers less than n 
    // which are co prime to n
    calculate_totient();
}
     
int32_t main(){
    solve();
    return 0;
}