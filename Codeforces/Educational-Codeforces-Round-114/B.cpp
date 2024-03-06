#include <iostream>
#include <algorithm>

void solve()
{
    int a, b, c, m;
    std::cin >> a >> b >> c >> m;

    if(a > b) { std::swap(a, b); }
    if(a > c) { std::swap(a, c); }
    if(b > c) { std::swap(b, c); }

    std::cout << (std::max(0, c - a - b - 1) <= m && m <= a + b + c - 3
        ? "YES" : "NO") << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
