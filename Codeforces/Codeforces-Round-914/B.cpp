#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

const int N = 1e5;

std::pair<int, int> d[N + 1];
int64_t sum[N + 1];

void solve()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        int aa;
        std::cin >> aa;
        d[i] = {aa, i };
    }
    std::sort(d + 1, d + n + 1);

    sum[0] = 0;
    for (int i = 1; i <= n; ++i) {
        sum[i] = sum[i - 1] + d[i].first;
    }

    int l = 0;
    std::vector<int> res(n + 1);
    for (int i = 1; i <= n; ++i) {
        if(l < i) {
            l = i;
            while (sum[l] >= d[l + 1].first && l < n) { ++l; }
        }
        res[d[i].second] = l - 1;
    }

    for (int i = 1; i <= n; ++i) {
        std::cout << res[i] << " \n"[i == n];
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
