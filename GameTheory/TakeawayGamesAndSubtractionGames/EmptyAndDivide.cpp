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
    // Empty and Divide
    // There are two boxes. Initally One Box contains m chips and other contains n chips. Such a position is denoted by (m,n), where m>0 and n>0. The two players alternate moving. A move consists of emptying one of the boxes, and dividing the contents of other b/w the boxes with atleast one chip in each box. There is a unique terminal position, namely (1,1). Last player to move wins.
    int m,n;
    cin >> m >> n;
    if(m&1 and n&1){
        cout<<"Loss";
    }else cout<<"Win";
}
     
int main(){
    solve();
    return 0;
}