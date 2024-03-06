#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int res = 0;
    for (int i = 1; i <= n; ++i) {
        int a;
        std::cin >> a;
        res += (i * (n - i + 1)) * (1 + int(a == 0));
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
