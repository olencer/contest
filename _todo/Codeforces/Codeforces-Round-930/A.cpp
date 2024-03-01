#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;

    int res = 1 << int(log(n) / log(2));
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
