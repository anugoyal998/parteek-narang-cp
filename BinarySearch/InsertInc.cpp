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

void insert_inc(vector<int> &arr,int k){
    int i = 0;
    int j = arr.size()-1;
    int idx = -1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid]<=k){
            idx = mid;
            i = mid + 1;
        }else{
            j = mid - 1;
        }
    }
    arr.insert(arr.begin()+idx+1, k);
}
     
void solve(){
    // insert element in array s.t. array remains sorted in increasing
    // 1,3,-1,-3,5,3,6,7
    vector<int> arr = {1,3};
    insert_inc(arr,-1);
    int idx = lower_bound(arr.begin(),arr.end(),1) - arr.begin();
    cout<<idx<<endl;
    arr.erase(arr.begin()+idx);
    for(auto i:arr)cout<<i<<" ";
}
     
int main(){
    solve();
    return 0;
}