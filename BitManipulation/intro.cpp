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
    // `~` this is not operator it will flip all the bits including sign bit
    // let's do not of 0
    // 0 --> 000000000000 ---> ~ ----> 111111111111 --> first one is sign bit
    // as sign bit is 1 so it's a negative number
    // for magnitude of negative numbers flip all bits except sign bit and add 1 to it
    int a = 0;
    cout<<~a<<endl;

     return 0;
}