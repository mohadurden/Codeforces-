#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
#define pq priority_queue
#define F first
#define S second
#define pb push_back
#define RANGE (r-l+1)
#define CEIL(a,b) (((a)/(b))+(((a)%(b))?1:0))
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define ANS(ans) if(ans) YES; else NO
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a)*(b))/gcd(a,b))
#define decr [](ll a, ll b){return a>b;}
//
// vector<int> sieve(int n) {
//     vector<int> divide(n + 1);
//     vector<bool> is_prime(n + 1, true);
//     is_prime[0] = is_prime[1] = false;
//
//     for (int i = 2; i <= n; ++i) {
//         if (is_prime[i]) {
//             divide[i] = i;
//             for (int j = 2 * i; j <= n; j += i) {
//                 is_prime[j] = false;
//                 if (divide[j] == 0) {
//                     divide[j] = i;
//                 }
//             }
//         }
//     }
//     return divide;
// }
// vector<int> prime_factorization3(int n, vector<int>& divide) {
//     vector<int> ret;
//     while (n != 1) {
//         int p = divide[n];
//         ret.push_back(p);
//         n /= p;
//     }
//     return ret;
// }

// long long binpow(long long a, long long b) {
//     long long res = 1;
//     while (b) {
//         if (b & 1) res *= a;
//         a *= a;
//         b >>= 1;
//     }
//     return res;
// }
// vector<int> seg, v;
//
//  ********SPF********************************************************
// const int MAXN = 1e8;
// int mo[MAXN];
// void sieve() {
//  for (int i = 1; i < MAXN; i++) mo[i] = i;
//  for (int i = 2; i * i < MAXN; i++) {
//   if (mo[i] == i) {
//    for (int j = i * i; j < MAXN; j += i) {
//     if (mo[j] == j) mo[j] = i; }}}
//  }

void solve() {
 ll n , k; cin >> n >> k;
   for (int i =0; i < n; i++) {
    if ((i&(n-1)) == i) {
     cout << k << " ";
    }
    else {
     cout << 0 << " ";
    }
   }
 cout << endl;
}





/*

*/

int main() {
 fastio;
 int t; cin >> t;
 while (t--) {
  solve();
 }
}
// ya rab
