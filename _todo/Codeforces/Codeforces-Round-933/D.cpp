#include <bits/stdc++.h>

void solve() {
    int n, m, x;
    std::cin >> n >> m >> x;

    std::set<int> a, res;
    a.insert(x - 1);
    for (int i = 1; i <= m; ++i) {
        int d;
        char op;
        std::cin >> d >> op;

        if (op == '0') {
            for (auto aa: a) {
                res.insert((aa + d) % n);
            }
        } else if (op == '1') {
            for (auto aa: a) {
                res.insert((aa - d + n) % n);
            }
        } else {
            for (auto aa: a) {
                res.insert((aa + d) % n);
                res.insert((aa - d + n) % n);
            }
        }

        if(i != m) {
            a.clear();
            for (auto bb: res) {
                a.insert(bb);
            }
            res.clear();
        }
    }

    std::cout << res.size() << '\n';
    for (int bb: res) {
        std::cout << bb + 1 << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
