#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,st,n) for(int i=st;i<n;i++)
#define nline cout<<endl;
#define mod 1000000007
#define maxN 1000001
#define ff first
#define ss second
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define print_arr(arr) for(auto i:arr)cout<<i<<' ';
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}
     
void solve(){
    // NimSum --> the nim-sum of two non-negative integers is their addition without
    // carry in base 2
    // NimSum = x^y
    // Theorem: A position, (x1,x2,x3), in Nim is a P-position if and only if the
    // nim-sum of its components is zero, x1^x2^x3 = 0.
    // The winning strategy in normal play Nim is to finish every move with a
    // Nim-sum of 0.
    // Lemmma - 1: if the Nim-sum is 0 after a player's turn, then the next move 
    // must change it.
    // Lemmma - 2: It is always possible to make the Nim-sum 0 on your turn if it
    // wasn't already 0 at the beginning of your turn.

}
     
int main(){
    solve();
    return 0;
}