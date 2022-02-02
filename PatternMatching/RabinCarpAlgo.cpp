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
#define print_vv(arr) for(auto i:arr){for(auto j:i)cout<<j<<' ';nline}
#define print_arr(arr,st,ed) for(int i=st;i<ed;i++)cout<<arr[i]<<' ';
 
vvi ar(100001);
vi vis(100001,0);
     
void fill_vector(vi &arr,int n){
loop(i,0,n){
cin>>arr[i];
}
}
 
void fill_graph(vvi &arr,int m,bool undir=true){
while(m--){
int a,b;
cin>>a>>b;
arr[a].pb(b);
if(undir)arr[b].pb(a);
}
}

const  int p = 31;

int poly_hash(string s){
    int hash = 0;
    int p_power = 1;
    for(int i = 0; i <s.size(); i++){
        hash += (s[i]-'a'+1)*p_power;
        p_power*=p;
        hash %= mod;
        p_power %= mod;
    }
    return hash;
}

int powr(int a,int b){
    int res = 1;
    while(b){
        if(b&1)res*=a;
        b/=2;
        a*=a;
        a%=mod;
        res%=mod;
    }
    return res;
}

int inv(int x){
    return powr(x,mod-2);
}
     
void solve(){
    string text = "abaabbabababababbbbbbbbbbbbaaa";
    string pattern = "aba";
    int pat_hash = poly_hash(pattern);
    int text_hash = poly_hash(text.substr(0,pattern.length()));
    if(pat_hash==text_hash){
        cout<<0<<" ";
    }
    int n = text.length();
    int m = pattern.length();
    for(int i=1;i+m<=n;i++){
        text_hash = (text_hash - (text[i-1]-'a'+1) + mod) % mod;
        text_hash = (text_hash*inv(p))%mod;
        text_hash = (text_hash + (text[i+m-1]-'a'+1)*powr(p,m-1))%mod;
        if(text_hash==pat_hash){
            cout<<i<<" ";
        }
    }
}
     
int main(){
    solve();
    return 0;
}