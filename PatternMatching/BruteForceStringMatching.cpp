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
    string text = "ababababaaaaaaaaaaabbbbbabab";
    string pat = "aba";
    int m = pat.length();
    int n = text.length();
    for(int i=0;i<=n-m;i++){
        if(text.substr(i,m)==pat){
            cout<<i<<endl;
        }
    }
}
     
int main(){
    solve();
    return 0;
}