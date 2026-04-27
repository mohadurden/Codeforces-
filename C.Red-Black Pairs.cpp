 /* GO HARD OR GO HOME */


 #include <bits/stdc++.h>
 using namespace std;
 #define rep(i, a, b) for(int i = a; i <= (b); ++i)
 #define all(x) begin(x), end(x)
 #define sz(x) (int)(x).size()
 typedef long long ll;
 typedef pair<int, int> pii;
 typedef vector<ll> vi;
 #define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 typedef long long ll;
 typedef unsigned long long ull;
 #define pq priority_queue
 #define F first
 #define S second
 #define pb push_back
 #define RANGE (r-l+1)
 #define CEIL(a,b) (((a)/(b))+(((a)%(b))?1:0))
 #define YES cout<<"Yes"<<endl
 #define NO cout<<"No"<<endl
 #define ANS(ans) if(ans) YES; else NO
 #define gcd(a,b) __gcd(a,b)
 #define lcm(a,b) (((a)*(b))/gcd(a,b))
 #define decr [](ll a, ll b){return a>b;}
 //
vector<ll> primes;
void sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void file() {
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif
}
// ll f(ll n , ll x) {
//  return (n%x+x)%x;

// }
// int ask(int l, int r) {
//  cout << "?" << l << " " << r << '\n';
//  int x; cin >> x;
//  return x;
// }
// long long removezero(long long x) { // 105
//     long long res = 0 , factor = 1;
//     while (x > 0) {
//         int digit = x % 10;
//         if (digit != 0) { // 5*1 = 5 , 1*10 =  15
//             res += digit * factor; // 5 + 10 = 15
//             factor *= 10;
//         }
//         x = x / 10; // 105 -> 15
//     }
//     return res; // 15
// }
// int dig(int x) {
//     int res = 0;
//     while (x>0) {
//         x/=10;
//         res++;
//     }
//     return res;
// }

// int ask(int l , int r) {
//     cout << "? " << l << " " << r << endl;
//     int x; cin >> x;
//     return x;
// }
int n;
string s , t;
int dp[200005+1];
int rec(int i) {
    int mn = INT_MAX;
    if (i >= n) {
        return 0;
    }
    if (dp[i] != -1 ) {
        return dp[i];
    }
    mn = min(rec(i+1) + (s[i] != t[i]) , mn);
    if (i + 2 <= n) {
        mn = min(rec(i+2 ) + (s[i] != s[i+1]) + (t[i] != t[i+1]) , mn);

    }
    dp[i]= mn;
    return mn;
}
void solve() {
     memset(dp, -1, sizeof dp);
     cin >> n;cin >> s;cin >> t;
     cout << rec(0 ) << '\n';
}

 int main() {
  file();
  fastio;
  int t; cin >> t; // 4
  while (t--) { // 4 3 2 1
  solve();
  }
  // solve();
 }
 // ya ra
