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
#define N 100000
     
void fill_vector(vi &arr,int n){
    loop(i,0,n){
        cin>>arr[i];
    }
}

vi sieveArr(N,0);
vi primes;

void sieve(){
    sieveArr[0] = sieveArr[1] = 1;
    for(ll i=2;i*i<=N;i++){
        if(sieveArr[i]==0){
            primes.pb(i);
            for(ll j=i*i;j<=N;j+=i){
                sieveArr[j] = 1;
            }
        }
    }
}
     
int main(){
    //segmented sieve
    sieve();
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin>>m>>n;
        vi segement(n-m+1,0);
        for(auto p : primes){
            if(p*p>n)break;
            int start = (m/p)*p;
            if(p>=m and p<=n){
                start = 2*p;
            }
            for(int j=start;j<=n;j+=p){
                if(j<m){
                    continue;
                }
                segement[j-m] = 1;
            }
        }
        for(int i=m;i<=n;i++){
            if(segement[i-m]==0 and i!=1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
     return 0;
}