#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int sum = 0;
    int maxl = 0;
    for (int i = 0; i < n; ++i) {
        int l;
        std::cin >> l;

        sum += l;
        maxl = std::max(maxl, l);
    }

    std::cout << ((maxl << 1) - sum + 1) << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
