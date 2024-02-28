#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;

    int res = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        res += abs(a);
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
