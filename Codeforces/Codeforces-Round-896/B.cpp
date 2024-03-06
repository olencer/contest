#include <iostream>
#include <utility>
#include <algorithm>

const int N = 2e5;
const int64_t F = 4e9;
std::pair<int, int> pos[N + 1];

void solve()
{
    int n, k, a, b;
    std::cin >> n >> k >> a >> b;
    for (int i = 1; i <= n; ++i) {
        int x, y;
        std::cin >> x >> y;
        pos[i] = {x, y};
    }

    int64_t res = std::abs(pos[a].first - pos[b].first * 1LL)
                + std::abs(pos[a].second - pos[b].second * 1LL);
    int64_t mina = F, minb = F;
    for (int i = 1; i <= k; ++i) {
        mina = std::min(mina, std::abs(pos[a].first - pos[i].first * 1LL)
                            + std::abs(pos[a].second - pos[i].second * 1LL));
        minb = std::min(minb, std::abs(pos[b].first - pos[i].first * 1LL)
                              + std::abs(pos[b].second - pos[i].second * 1LL));
    }

    res = std::min(res, mina + minb);
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
