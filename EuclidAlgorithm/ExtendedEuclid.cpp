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

vi extendedGCD(int a,int b){
    if(b==0){
        return {1,0};
    }
    vi result = extendedGCD(b,a%b);
    int smallX = result[0];
    int smallY = result[1];
    int x = smallY;
    int y = smallX - (a/b)*smallY;
    return {x,y};
}

void solve(){
    // Ax + By = gcd(A,B)
    // Find x and y
    // Ax + By = gcd(A,B) --- (1)
    // Bx1 + (A%B)y1 = gcd(B,A%B)
    // Bx1 + [A - (int)(A/B)B]y1 = gcd(A,B)
    // B[x1 - (A/B)y1] + Ay1 = gcd(A,B) --- (2)
    // From (1) and (2)
    // x = y1
    // y = x1 - (A/B)y1
    
    int a,b;
    cin >> a >> b ;
    vi ans = extendedGCD(a,b);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}
     
int main(){
    solve();
    return 0;
}