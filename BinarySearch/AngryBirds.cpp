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

bool help(vi arr,int k,int b){
    int cnt = 1;
    int pos = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]-pos>=k){
            cnt++;
            pos = arr[i];
        }
    }
    return cnt >= b;
}

int angry_birds(vi arr,int b){
    int n = arr.size();
    int s = 0;
    int e = arr[n-1]-arr[0];
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(help(arr,mid,b)){
            ans = mid;
            s = mid+1;
        }else e = mid-1;
    }
    return ans;
}
     
int main(){ 
    //There is a long wire along at straight line, which contains
    //N bird nests at positions x1,x2,x3.....xN.
    //There are B (B<=N) birds, which become angry towards
    //each other once put into a nest. To put the birds from
    //hurting each other you want to assign birds to nests s.t.
    //minimum distance between any two birds is as large as possible.
    //What is the largest minimum distance?

    int n;
    cin >> n;
    vi arr(n);
    fill_vector(arr,n);
    int b;
    cin >> b;
    cout<<angry_birds(arr,b);
     return 0;
}