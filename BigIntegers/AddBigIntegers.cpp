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

char digitToChar(int n){
    return n + '0';
}

int charToDigit(char ch){
    return ch - '0';
}

string addNumbers(string n1,string n2){
    if(n1.length() > n2.length()){
        swap(n1,n2);
    }
    string result = "";
    reverse(n1.begin(),n1.end());
    reverse(n2.begin(),n2.end());
    int carry = 0;
    loop(i,0,n1.length()){
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);
        int sum = d1+d2+carry;
        int output_digit = sum%10;
        carry = sum/10;
        result.pb(digitToChar(output_digit));
    }
    loop(i,n1.length(),n2.length()){
        int d2 = charToDigit(n2[i]);
        int sum = d2+carry;
        int output_digit = sum%10;
        carry = sum/10;
        result.pb(digitToChar(output_digit));
    }
    if(carry){
        result.pb('1');
    }
    reverse(result.begin(),result.end());
    return result;
}
     
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    string result = addNumbers(s1,s2);
    cout<<result<<endl;

     return 0;
}