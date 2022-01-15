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
     
void solve(){
    string s,t;
    cin >> s >> t;
    int k = t.length();
    vi f1(26,0);
    vi f2(26,0);
    for(auto i:t)f1[i-'a']++;
    int ans = 0;
    int i = 0,j  = 0;
    while(j<s.length()){
        f2[s[j]-'a']++;
        if(j-i+1==k){
            if(f1==f2)ans++;
            f2[s[i]-'a']--;
            i++;
        }
        j++;
    }
    cout<<ans<<endl;

}
     
int main(){
    solve();
    return 0;
}