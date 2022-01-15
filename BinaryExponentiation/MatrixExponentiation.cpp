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

const int sz = 2;

struct Mat{
    int m[sz][sz];
    Mat(){
        memset(m,0,sizeof(m));
    }
    void identity(){
        for(int i=0;i<sz;i++){
            m[i][i] = 1;
        }
    }
    Mat operator* (Mat a){
        Mat res;
        loop(i,0,sz){
            loop(j,0,sz){
                loop(k,0,sz){
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }
        return res;
    }
};
     
int Fib(int n){
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;
    if(n<=2)return 1;
    n -= 2;
    while(n){
        if(n&1)res = res * T;
        T = T * T;
        n /= 2;
    }
    return (res.m[0][0] + res.m[0][1]) % mod;
}
     
int32_t main(){
    //Fibonacci using Matrix Exponentiation
    int n;
    cin >> n;
    cout<<Fib(n);
    return 0;
}