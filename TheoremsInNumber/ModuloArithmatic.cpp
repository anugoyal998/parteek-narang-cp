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

const int P = 5;

int addm(int x,int y){
    return (x+y) % P;
}

int subm(int x,int y){
    return ((x-y) % P + P) % P;
}

int mulm(int x,int y){
    return ((x % P) * (y % P)) % P;
}
     
void solve(){
    // Two numbers are congruent modulo a given number if they
    // give the same remainder when divided by that number

    cout<<addm(3,5)<<endl;
    cout<<subm(-3,5)<<endl;
    cout<<mulm(300,265)<<endl;
}
     
int main(){
    solve();
    return 0;
}