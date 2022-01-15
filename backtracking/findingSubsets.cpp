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

void findSubsets(char *input,char *output,int i,int j){
    //base case
    if(input[i]=='\0'){
        output[j]  = '\0';
        cout<<output<<endl;
        return;
    }
    // rec case
    // include
    output[j] = input[i];
    findSubsets(input,output,i+1,j+1);
    //exclude
    findSubsets(input,output,i+1,j);
}
     
void solve(){
    char input[100];
    char output[100];
    cin>>input;
    findSubsets(input,output,0,0);
}
     
int main(){
    solve();
    return 0;
}