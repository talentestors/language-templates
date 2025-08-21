#define _USE_MATH_DEFINES // To use the definition of cmath

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;

// mp.reserve(1024), mp.max_load_factor(0.75);
// Used only for basic types, pair, and tuple.
template<typename T>
struct custom_hash_base {
    size_t operator()(const T& x) const {
        static const size_t seed = chrono::steady_clock::now().time_since_epoch().count();
        return _Hash_bytes(&x, sizeof(x), seed);
    }
};

static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
#endif
    return nullptr;
}();

inline void solve() {
    string s;
    cin.ignore();
    getline(cin, s);
    cout << s << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
