#include <iostream>

const int M = 1e3;

int n, m, k;
int x[M + 1];

int popcount(int xx)
{
    int cnt = 0;
    int diff = x[m] ^ xx;
    for (int i = 0; i < n; ++i) {
        cnt += diff & 1;
        diff >>= 1;
    }
    return cnt;
}

void solve()
{

    std::cin >> n >> m >> k;

    for (int i = 0; i <= m; ++i) {
        std::cin >> x[i];
    }

    int res = 0;
    for (int i = 0; i < m; ++i) {
        res += int(popcount(x[i]) <= k);
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
