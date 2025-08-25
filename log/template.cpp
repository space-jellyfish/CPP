#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdint>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <list>
#include <chrono>
#include <random>
#include <iomanip>
#include <fstream>
#include <numeric>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i=0; i<n; ++i)
#define forsn(i,s,n) for(ll i=s; i<n; ++i)
#define rforn(i,s) for(ll i=s; i>=0; --i)
#define rforsn(i,s,n) for(ll i=s; i>=n; --i)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define out(x) cout<<x<<ln
#define rv(v) for(auto& x:v) cin>>x
#define rnv(n,v,t) ll n; cin>>n; vector<t> v(n); rv(v)  
#define mp make_pair
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void solve(){
    rnv(n, hs, int);
    out(n*n);
}
int main()
{
	fast_cin();
	ll t;
	cin >> t;
	for(int it=1;it<=t;it++) {
	cout << "Case #" << it << ": ";
		solve();
	}
	return 0;
}









// digit count
int dc(uint64_t n) {
    if (!n) {
        return 1;
    }
    return static_cast<int>(log10(n)) + 1;
}

// sum digits
int sd(uint64_t n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// sum digits first k
int sdfk(uint64_t n, int k) {
    int ignore = max(0, dc(n) - k);
    return sd(n / pow(10, ignore));
}

// sum digits last k
int sdlk(uint64_t n, int k) {
    return sd(n % static_cast<uint64_t>(pow(10, k)));
}

// base convert from 10 to b
vector<int> bc(uint64_t n, int b) {
    vector<int> ans;
    while (n) {
        ans.push_back(n % b);
        n /= b;
    }
    return ans;
}

// base convert from b to 10
uint64_t bc(vector<int> n, int b) {
    if (n.empty()) {
        return 0;
    }
    uint64_t ans = n.back();
    for (int i = n.size() - 2; i >= 0; --i) {
        ans *= b;
        ans += n[i];
    }
    return ans;
}

// gcd/lcm(a, b) from <numeric> header
