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
    int mask = (1<<i);
    return (n&mask) > 0 ? 1 : 0;
}

void set_bit(int &n,int i){
    int mask = (1<<i);
    n = (n|mask);
}

void clear_bit(int &n,int i){
    int mask = (1<<i);
    mask = ~mask;
    n = n&mask;
}

void clearLastIBits(int &n,int i){
    int mask = (-1 << i);
    n = n&mask;
}

int count_bit(int n){
    int ans = 0;
    while(n){
        //remove last set bit from the current number
        n = n&(n-1);
        ans++;
    }
    return ans;
}
     
int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    cout<<n<<endl;
    clearLastIBits(n,i);
    cout<<n<<endl;
     return 0;
}