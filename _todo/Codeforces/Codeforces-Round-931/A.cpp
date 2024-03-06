#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    std::sort(a, a + n);

    int res = 2 * (a[n - 1] + a[n - 2] - a[0] - a[1]);
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
