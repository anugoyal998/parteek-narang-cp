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

double findMedianSortedArray(vi a,vi b){
    if(a.size() < b.size())return findMedianSortedArray(b,a);
    int n1 = a.size();
    int n2 = b.size();
    int low = 0;
    int high = n1;
    while(low<=high){
        int cut1 = (low+high) >> 1;
        int cut2 = (n1 + n2 + 1) / 2 - cut1;

        int left1 =  cut1 == 0 ? INT_MIN : a[cut1-1];
        int left2 =  cut2 == 0 ? INT_MIN : b[cut2-1];

        int right1 = cut1 == n1 ? INT_MAX : a[cut1];
        int right2 = cut2 == n2 ? INT_MAX : b[cut2];

        if(left1 <= right2 and left2 <= right1){
            if((n1+n2)%2 == 0)
                return (max(left1,left2) + min(right1,right2)) / 2.0;
            else
                return max(left1,left2);
        }else if(left1 > right2){
            high = cut1 - 1;
        }else{
            low = cut1 + 1;
        }
    }
    return 0.0
}

void solve(){   
    // https://leetcode.com/problems/median-of-two-sorted-arrays/

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    solve();
}