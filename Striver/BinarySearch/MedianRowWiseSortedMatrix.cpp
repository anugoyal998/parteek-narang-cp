#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define loop(i,st,ed) for(int i=st;i<ed;i++)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vvi vector<vi>
#define nline cout<<endl;
#define loop(i,st,ed) for(int i=st;i<ed;i++)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void fill_vector(vector<int> &arr,int n){
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }
}

int get_idx(vector<int> arr,int k){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int countSmallThanMid(vi arr,int mid){
    int l = 0, h = arr.size()-1;
    while(l<=h ){
        int md = (l+h) >> 1;
        if(arr[md] <= mid){
            l = md+1;
        }else h = md-1;
    }
    return l;
}

void solve(){   
    int n,m;
    cin>>n>>m;
    vvi arr(n,vi(m));
    loop(i,0,n){
        loop(j,0,m)cin>>arr[i][j];
    }
    int low = 0;
    int high = 1e9;
    while(low<=high){
        int mid = (low+high) >> 1;
        int cnt = 0;
        loop(i,0,n){
            cnt += countSmallThanMid(arr[i],mid);
        }
        if(cnt <= (n*m) / 2)low = mid+1;
        else high = mid-1;
    }
    cout<<low<<endl;    
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    solve();
}