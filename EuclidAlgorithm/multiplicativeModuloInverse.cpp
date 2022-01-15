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

vi extendedGCD(int a,int b){
    if(b==0){
        return {1,0,a};
    }
    vi result = extendedGCD(b,a%b);
    int smallX = result[0];
    int smallY = result[1];
    int gcd  = result[2];
    int x = smallY;
    int y = smallX - (a/b)*smallY;
    return {x,y,gcd};
}

int modInverse(int a,int m){
    vi result = extendedGCD(a,m);
    int x = result[0];
    int gcd = result[2];
    if(gcd!=1){
        cout<<"multiplicative modulo inverse doesn't exist"<<endl;
        return -1;
    }
    int ans = (x%m + m) % m;
    return ans;
}
     
void solve(){
    // Given two integers `a` and `m`, find modular multiplicative
    // inverse of `a` under modulo `m`. The modular multiplicative inverse
    // is an integer 'x' s.t.
    // a*x (congruent) 1 (mod m) ----> (a*x) % m  = 1
    // -> 1<= x <= m-1
    // -> MMI exists if a and m are relatively prime i.e. gcd(a,m) = 1

    int a,m;
    cin >> a >> m ;
    cout<<modInverse(a,m);
}
     
int main(){
    solve();
    return 0;
}