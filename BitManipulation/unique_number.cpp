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
     
int main(){
    int n;
    cin >> n;
    vi arr(n);
    fill_vector(arr,n);
    int result = 0;
    for(auto i:arr)result^=i;
    int pos = 0;
    int temp = result;
    while((temp&1)==0){
        pos++;
        temp = temp>>1;
    }
    int mask = 1<<pos;
    int setA = 0;
    int setB = 0;
    for(auto i:arr){
        if(i & mask){
            setA = setA ^ i;
        }else{
            setB = setB ^ i;
        }
    }
    cout<<setA<<" "<<setB<<endl;

     return 0;
}