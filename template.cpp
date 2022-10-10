#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#pragma GCC target("avx2") // If it compiles locally it might be this
#pragma GCC optimize("O3", "unroll-loops")

using ll = long long;
using db = long double;
using pi = pair<int, int>;

#define ordered_set                                                            \
    tree<int, null_type, less<int>, rb_tree_tag,                               \
         tree_order_statistics_node_update>
#define mp make_pair
#define mt make_tuple
#define f first
#define s second
#define sp " "

#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define rsz resize
#define pb push_back

#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)

inline namespace FastIO {
const int BSZ = 1 << 15;
char ibuf[BSZ];
int ipos, ilen;
char nc() {
    if (ipos == ilen) {
        ipos = 0;
        ilen = fread(ibuf, 1, BSZ, stdin);
        if (!ilen)
            return EOF;
    }
    return ibuf[ipos++];
}
void rs(string &x) {
    char ch;
    while (isspace(ch = nc()))
        ;
    do {
        x += ch;
    } while (!isspace(ch = nc()) && ch != EOF);
}
template <class T> void ri(T &x) {
    char ch;
    int sgn = 1;
    while (!isdigit(ch = nc()))
        if (ch == '-')
            sgn *= -1;
    x = ch - '0';
    while (isdigit(ch = nc()))
        x = x * 10 + (ch - '0');
    x *= sgn;
}
char obuf[BSZ], numBuf[100];
int opos;
void flushOut() {
    fwrite(obuf, 1, opos, stdout);
    opos = 0;
}
void wc(char c) {
    if (opos == BSZ)
        flushOut();
    obuf[opos++] = c;
}
void ws(string s) { for(auto c : s) wc(c); }
template <class T> void wi(T x, char after = '\0') {
    if (x < 0)
        wc('-'), x *= -1;
    int len = 0;
    for (; x >= 10; x /= 10)
        numBuf[len++] = '0' + (x % 10);
    wc('0' + x);
    R0F(i, len) wc(numBuf[i]);
    if (after)
        wc(after);
}
void initO() { assert(atexit(flushOut) == 0); }
} 
void setIO(string name = "") {
    initO();
    cin.tie(0), cout.sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
const int MOD = 1e9 + 7;
const db PI = acos((db)-1);
mt19937 rng(0);

// READ READ READ READ READ READ READ READ READ READ READ READ READ READ READ READ 
int main() { 
    setIO();
}
