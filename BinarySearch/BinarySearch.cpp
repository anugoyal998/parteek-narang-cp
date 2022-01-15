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

int binary_search(vi arr,int x){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]<x){
            s = mid + 1;
        }else if(arr[mid]>x){
            e = mid - 1;
        }else{
            return mid;
        }
    }
    return -1;
}
     
int main(){
    int n;
    cin >> n;
    vi arr(n);
    fill_vector(arr,n);
    int x;
    cin >> x;
    sort(arr.begin(),arr.end());
    cout<<binary_search(arr,x);

     return 0;
}