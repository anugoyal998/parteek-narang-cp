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

void brackets(int n,int o,int c,string sof){
    if(o+c==2*n){
        cout<<sof<<endl;
        return;
    }
    if(o<n){
        brackets(n,o+1,c,sof+'(');
    }
    if(o>c){
        brackets(n,o,c+1,sof+')');
    }
}
     
void solve(){
    int n;
    cin >> n;
    brackets(n,0,0,"");
}
     
int main(){
    solve();
    return 0;
}