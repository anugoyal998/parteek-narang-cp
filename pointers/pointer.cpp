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
    // pointers
    // int a = 2;
    // int *add = &a; // this poniter stores only address of int variables only
    // cout<<add<<endl;
    // cout<<*add<<endl;
    // *add = 3;
    // cout<<*add<<endl;
    // add = 1; // we can assing 0 to pointer but not other integers as 0 refers to NULL
    // add  = 100; // this gives error
    // // cout<<add<<endl;
    // cout<<sizeof(add);


    // pointer to pointer
    // int a = 9;
    // int *add = &a;
    // int **ptr = &add;
    // cout<<add<<" "<<ptr<<endl;
    // cout<<*add<<" "<<*ptr<<endl; // dereferencing
    // *add = 88;
    // cout<<*add;

    //pointers arithmetic
    int a;
    int *ptr = &a;
    cout<<ptr<<" "<<ptr-1<<endl; // incremented by 4 bits
    cout<<ptr<<" "<<ptr-1<<endl; // incremented by 4 bits
}
     
int main(){
    solve();
    return 0;
}