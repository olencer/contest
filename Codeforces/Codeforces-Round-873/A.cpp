#include <iostream>
#include <algorithm>

const int N = 2e5;
const int64_t mod = 1e9 + 7;

int a[N + 1], b[N + 1];

void solve()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) { std::cin >> a[i]; }
    for (int i = 0; i < n; ++i) { std::cin >> b[i]; }

    std::sort(a, a + n);
    std::sort(b, b + n);

    int index = 0;
    int64_t res = 1;
    for (int i = 0; i < n; ++i) {
        while (index < n && a[i] > b[index]) { ++index; }
        res = (res * (index - i)) % mod;
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
