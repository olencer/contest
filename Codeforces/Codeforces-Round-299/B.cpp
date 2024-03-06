#include <iostream>

void solve()
{
    int n;
    std::cin >> n;

    int base = 1;
    int res = 0;
    while (n) {
        res += ((n % 10 == 4) ? 1 : 2) * base;

        n /= 10;
        base <<= 1;
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
