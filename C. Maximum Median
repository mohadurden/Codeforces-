// C. Maximum Median , Codeforces Round 577 (Div. 2)
/*
█████╗ ██╗   ██╗ █████╗ ██████╗  █████╗
██╔══██╗██║   ██║██╔══██╗██╔══██╗██╔══██╗
███████║██║   ██║███████║██║  ██║███████║
██╔══██║╚██╗ ██╔╝██╔══██║██║  ██║██╔══██║
██║  ██║ ╚████╔╝ ██║  ██║██████╔╝██║  ██║
╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝

██╗  ██╗███████╗██████╗  █████╗ ██╗   ██╗██████╗  █████╗
██║ ██╔╝██╔════╝██╔══██╗██╔══██╗██║   ██║██╔══██╗██╔══██╗
█████╔╝ █████╗  ██║  ██║███████║██║   ██║██████╔╝███████║
██╔═██╗ ██╔══╝  ██║  ██║██╔══██║╚██╗ ██╔╝██╔══██╗██╔══██║
██║  ██╗███████╗██████╔╝██║  ██║ ╚████╔╝ ██║  ██║██║  ██║
╚═╝  ╚═╝╚══════╝╚═════╝ ╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝╚═╝  ╚═╝
 */
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for(int i = a; i <= (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fileio ifstream cin("in.txt"); ofstream cout("out.txt");
typedef long long ll;
typedef unsigned long long ull;
#define pq priority_queue
#define F first
#define S second
#define pb push_back
typedef vector<pair<ll,ll>> graph;
typedef vector<ll> nw_graph;
typedef vector<ll> tree;
typedef pq<pair<ll,ll>> dij_q;
const ll N=2e5+1;
const ll N3=5e3+1;
const ll N4=2e4+1;
const ll N5=1e5+1;
const ll N6=1e6+1;
const ll N8=1e8+1;
const ll INF=1e9;
const ll LOGN=20;
const ll LOG9=30;
const ll LOG18=60;
const ll MOD=1e9+7;
const ll SQRT=500;
#define MID ((l+r)/2)
#define RANGE (r-l+1)
#define CEIL(a,b) (((a)/(b))+(((a)%(b))?1:0))
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define ANS(ans) if(ans) YES; else NO
ll mpow(ll b, ll p, ll m=MOD){ll ans=1; while(p>0){ if(p%2==1)ans*=b; b=(b*b)%m; p/=2; ans%=m;} return ans;}
#define div(a) *mpow(a,MOD-2,MOD);
#define divm(a,m) *mpow(a,m-2,m);
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (((a)*(b))/gcd(a,b))
#define decr [](ll a, ll b){return a>b;}
vector<ll> a;
ll chk (ll mid) {
 ll b=0;
 for (int i = a.size()/2; i < a.size(); i++ ) {
  if (a[i] < mid) {
   b += mid - a[i];
  }
 }
 return b;
}
 void solve() {
 ll n , k; cin >> n >> k;
 a.clear();
 a.resize(n);
 for (int i =0; i < n; i++) {
  cin >> a[i];
 }
 sort(a.begin(), a.end());
 ll l=0, r = 1e12;
 while(l<r) {
  ll mid = l + (r - l + 1) / 2;
  if (chk(mid) > k) {
   r = mid-1;
  }
  else {
   l = mid;
  }
 }
 cout << l  << endl;
 }
/*



*/
int main() {
 fastio;
 // int t; cin >> t;
 // while (t--) {
 //  solve();
 // }
 solve();
}
// ya rab
