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

int powr(int a,int n){
    if(n==0)return 1;
    return a * powr(a,n-1);
}

int fast_powr(int a,int n){
    if(n==0)return 1;
    int subProb = fast_powr(a,n/2);
    int subProbSq = subProb * subProb;
    if(n&1){
        return a * subProbSq;
    }
    return subProbSq;
}
     
void solve(){
    int a,n;
    cin >> a >> n;
    cout<<powr(a,n)<<endl;
    cout<<fast_powr(a,n)<<endl;

}
     
int main(){
    solve();
    return 0;
}