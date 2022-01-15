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

bool isSafe(vvi mat,int i,int j,int no,int n){
    // check for row and col
    loop(k,0,n){
        if(mat[k][j]==no || mat[i][k]==no)return false;
    }
    // check for subgrid
    int sx = (i/3)*3;
    int sy = (j/3)*3;
    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(mat[x][y]==no)return false;
        }
    }
    return true;
}

void print(vvi mat){
    for(auto i:mat){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool solveSudoku(vvi mat,int i,int j,int n){
    // base case
    if(i==n){
        print(mat);
        return true;
    }
    // rec case
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }
    // skip the prefilled cell
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }
    // try out all possibilities
    loop(no,1,10){
        if(isSafe(mat,i,j,no,n)){
            mat[i][j] = no;
            bool solveSubproblem = solveSudoku(mat,i,j+1,n);
            if(solveSubproblem)return true;
        }
    }
    // backtrack
    mat[i][j] = 0;
    return false;
}
     
int solveSudokuAll(vvi mat,int i,int j,int n){
    // base case
    if(i==n){
        print(mat);
        return 1;
    }
    // rec case
    int ways = 0;
    if(j==n){
        return solveSudokuAll(mat,i+1,0,n);
    }
    // skip the prefilled cell
    if(mat[i][j]!=0){
        return solveSudokuAll(mat,i,j+1,n);
    }
    // try out all possibilities
    loop(no,1,10){
        if(isSafe(mat,i,j,no,n)){
            mat[i][j] = no;
            ways += solveSudokuAll(mat,i,j+1,n);
        }
    }
    // backtrack
    mat[i][j] = 0;
    return ways;
}
     
void solve(){
    int n = 9;
    vvi mat = {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    // if(!solveSudoku(mat,0,0,n)){
    //     cout<<"No Solution Exists!";
    // }
    cout<<solveSudokuAll(mat,0,0,n);

}
     
int main(){
    solve();
    return 0;
}