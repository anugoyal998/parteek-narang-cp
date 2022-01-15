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

int multiply(int a,int b){
    int res = 0;
    while(b){
        if(b&1)res += a, res %= mod;
        a *= 2; a %= mod;
        b /= 2;
    }
    return res;
}
     
int main(){
    int a = 1000000;
    cout<<multiply(a,a);
     return 0;
}