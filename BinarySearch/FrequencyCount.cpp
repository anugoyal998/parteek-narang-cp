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

int lower_bound(vi arr,int k){
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]>k){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}

int upper_bound(vi arr,int k){
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            ans = mid;
            s = mid+1;
        }else if(arr[mid]>k){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return ans;
}
     
int main(){
    //Given a sorted array which can contain repeated elemenrs
    // and an element K , we need to find the frequency of a
    // given element
    int n;
    cin >> n;
    vi arr(n);
    fill_vector(arr, n);
    int k;
    cin >> k;
    cout<<upper_bound(arr, k)-lower_bound(arr, k)+1<<endl;


     return 0;
}