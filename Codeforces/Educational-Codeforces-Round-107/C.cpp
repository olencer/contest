#include <iostream>
#include <algorithm>

const int N = 3e5;

int a[N];

void solve()
{
    int n, q;
    std::cin >> n >> q;

    for (int i = 0; i < n; ++i) { std::cin >> a[i]; }
    for (int i = 0; i < q; ++i) {
        int t;
        std::cin >> t;

        int res = int(std::find(a, a + n, t) - a);
        std::rotate(a, a + res, a + res + 1);
        std::cout << res + 1 << ' ';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
