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
    // Chinese Remainder Theorem
    // Question
    // x % 3 = 2
    // x % 5 = 3
    // x % 7 = 4
    // Answer
    // x = A + B + C
    // x = a*3*5 + b*3*7 + c*5*7 

}
     
int main(){
    solve();
    return 0;
}