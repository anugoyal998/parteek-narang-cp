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

void multiply(vi &a,int no,int &size){
    int carry = 0;
    loop(i,0,size){
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = product / 10;
    }
    while(carry){
        a[size] = carry % 10;
        carry /= 10;
        size++;
    }
}

void bigFactorial(int n){
    vi a(10000,0);
    a[0] = 1;
    int size = 1;
    loop(i,2,n+1){
        multiply(a,i,size);
    }
    for(int i=size-1; i>=0; i--){
        cout<<a[i];
    }
}
     
int main(){
    int n;
    cin >> n;
    bigFactorial(n);

     return 0;
}