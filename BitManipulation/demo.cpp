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

int get_bit(int n,int i){
    int x = (1<<i);
    int y = x&n;
    if(y==0)return 0;
    else return 1;
}

int set_bit(int n,int i){
    int x = (1<<i);
    int y = (x|n);
    return y;
}

int clear_bit(int n,int i){
    int x = (1<<i); // 2 power i
    x = ~x;
    // 2^i = 8 --> 001000
    // ~8 -->      110111
    int y = (x&n);
    return y;
}


     
int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    // cout<<get_bit(n,i)<<endl;
    // cout<<n<<endl;
    // n = set_bit(n,i);
    // cout<<n<<endl;
    cout<<n<<endl;
    n = clear_bit(n,i);
    cout<<n<<endl;
     return 0;
}