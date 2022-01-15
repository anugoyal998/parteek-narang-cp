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

void printBoard(vvi board){
    for(auto i:board){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool canPlace(vvi board,int n,int x,int y){
    //column
    for(int k=0;k<x;k++){
        if(board[k][y]==1)return false;
    }
    // left diagonal
    int i = x;
    int j = y;
    while(i>=0 and j>=0){
        if(board[i][j]==1)return false;
        i--;j--;
    }
    // right diagonal
    i = x;
    j = y;
    while(i>=0 and j<n){
        if(board[i][j]==1)return false;
        i--;j++;
    }
    return true;
}

bool solveNQueen(int n,vvi &board,int i){
    if(i==n){
        printBoard(board);
        return true;
    }
    loop(j,0,n){
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;
            bool success = solveNQueen(n,board,i+1);
            if(success)return true;
            // backtrack
            board[i][j] = 0;
        }
    }
    return false;
}

int solveNQueenAll(int n,vvi &board,int i){
    if(i==n){
        printBoard(board);
        return 1;
    }
    int ways = 0;
    loop(j,0,n){
        if(canPlace(board,n,i,j)){
            board[i][j] = 1;
            ways += solveNQueenAll(n,board,i+1);
            // backtrack
            board[i][j] = 0;
        }
    }
    return ways;
}
     
void solve(){
    int n;
    cin >> n;
    vvi board(n,vi(n,0));
    // solveNQueen(n,board,0);
    cout<<solveNQueenAll(n,board,0)<<endl;
}
     
int main(){
    solve();
    return 0;
}