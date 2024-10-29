#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>

using namespace std;
using __gnu_pbds::cc_hash_table; // cc_hash_table是拉链法
using __gnu_pbds::gp_hash_table; // gp_hash_table是查探法

using ll = long long;
using ld = long double;
using ull = unsigned long long;

// mp.reserve(1024), mp.max_load_factor(0.75);
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ x >> 30) * 0xbf58476d1ce4e5b9;
        x = (x ^ x >> 27) * 0x94d049bb133111eb;
        return x ^ x >> 31;
    }

    size_t operator()(const uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
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
    getline(cin, s);
    cout << s << endl;
}

int main() {
    int T;
    for (cin >> T; T > 0; --T) {
        solve();
    }
    return 0;
}
