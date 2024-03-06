#include <iostream>
#include <cmath>

void solve()
{
    int n, d;
    std::cin >> n >> d;
    std::cout << (2 * std::sqrt(d) <= n + 1 ? "YES" : "NO") << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
