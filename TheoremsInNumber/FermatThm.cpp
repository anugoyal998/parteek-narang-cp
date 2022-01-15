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

const int P = 7, N = 1e5;
int fact[N];

int addm(int x,int y){
    return (x+y) % P;
}

int subm(int x,int y){
    return ((x-y) % P + P) % P;
}

int mulm(int x,int y){
    return ((x % P) * (y % P)) % P;
}

int powrm(int x,int y){
    int res = 1;
    while(y){
        if(y&1)res = mulm(res,x);
        y/=2;
        x = mulm(x,x);
    }
    return res;
}

int inv(int x){
    return powrm(x,P-2);
}

int divm(int x,int y){
    return mulm(x,inv(y));
}

void calculate_factorials(){
    fact[0] = 1;
    for(int i=1;i<N;i++){
        fact[i] = mulm(fact[i-1],i);
    }
}

int ncr(int n,int r){
    return mulm(mulm(fact[n],inv(fact[r])),inv(fact[n-r]));
}
     
void solve(){
    // Fermat's Little Theorem
    // a^p == a (mod p) --> p is prime, `==` is congruent
    // a^p-1 == 1 mod p
    // a^p-2 == a^-1 mod p
    // (x/y)%p = ((x%p)*(y^-1%p))%p
    // (x/y)%p = ((x%p)*(y^(p-2)%p))%p
    cout<<divm(56,2)<<endl;
    calculate_factorials();
    cout<<fact[5]<<endl;
    cout<<ncr(5777,123)<<endl;
}
     
int main(){
    solve();
    return 0;
}