#include <bits/stdc++.h>

const int N = 1E2;

int b[N + 1], c[N + 1];

void solve()
{
    int n, m, k;
    std::cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i) { std::cin >> b[i]; }
    for (int i = 1; i <= m; ++i) { std::cin >> c[i]; }

    std::sort(b + 1, b + n + 1);
    std::sort(c + 1, c + m + 1);

    int res = 0;
    int l = 1, r = m;
    while (l <= n && r > 0) {
        while (b[l] + c[r] > k && r > 0) { --r; }
        res += r;
        ++l;
    }
    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
