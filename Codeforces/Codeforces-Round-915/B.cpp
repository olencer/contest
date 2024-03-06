#include <iostream>
#include <cstring>

const int N = 1e5;
int d[N + 1];

void solve()
{
    int n;
    std::cin >> n;

    std::memset(d + 1, 0, n * sizeof(int));
    for (int i = 1; i < n; ++i) {
        int u, v;
        std::cin >> u >> v;
        ++d[u];
        ++d[v];
    }

    int res = 1;
    for (int i = 1; i <= n; ++i) {
        if(d[i] == 1) { ++res; }
    }
    res >>= 1;
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
