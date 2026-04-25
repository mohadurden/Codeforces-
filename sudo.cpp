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
int ans[9][9];
int blocks[9][9];
int sudoku[9][9];
bool vis_row[10][9];
bool vis_coll[10][9];
bool vis_block[10][9];
void bck(int r , int c) {
    if (c == 9) {
        bck(r+1,0);
        return;
    }
    if (r == 9) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                cout << sudoku[i][j] << " ";
            }
            cout << endl;
        }
        return;
    }
    if (sudoku[r][c] != 0) {
        bck(r,c+1);

    }
    for (int i = 1 ; i <= 9 ; ++i) {
        if (vis_row[i][r] || vis_coll[i][c] || vis_block[i][blocks[r][c]]) {
            continue;
        }
        sudoku[r][c] =i;
        vis_row[i][r] = true;
        vis_coll[i][c] = true;
        vis_block[i][blocks[r][c]] = true;
        bck(r,c+1);
        sudoku[r][c] = 0;
        vis_row[i][r] = false;
        vis_coll[i][c] = false;
        vis_block[i][blocks[r][c]] = false;
    }
}
void solve() {
    int used=0;
    for (int r =0 ; r < 9; r+=3) {
        for (int c = 0; c < 9; c+=3) {
            for (int i = r; i < r+3 ; ++i) {
                for (int j = c; j < c+3; ++j) {
                    blocks[i][j] = used;
                }
            }
            used++;
        }
    }
    for (int r =0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char x; cin >> x;
            if (x == '?') sudoku[r][c] = 0;
            else {
                sudoku[r][c] = x - '0';// 3la shan tekoon number
                vis_row[sudoku[r][c]][r] = true;
                vis_coll[sudoku[r][c]][c] = true;
                vis_block[sudoku[r][c]][blocks[r][c]] = true;
            }
        }
    }
    bck(0,0);
}

 int main() {
  file();
  fastio;
  // int t; cin >> t; // 4
  // while (t--) { // 4 3 2 1
  // solve();
  // }
  solve();
 }
 // ya ra
