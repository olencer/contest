#include <iostream>
#include <algorithm>

const int N = 1E5;

int a[N + 1];
int sum[N + 1];

int64_t calc(int s, int u)
{
    return 1LL * (u + (u - s + 1)) * s / 2;
}
void solve()
{
    int n, q;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    std::cin >> q;
    while(q--) {
        int l, u;
        std::cin >> l >> u;
        int r = int(
            std::lower_bound(sum + l + 1, sum + n + 1, sum[l - 1] + u)
                - (sum + 1)
        );

        if(r < n
            && calc(sum[r] - sum[l - 1], u)
            < calc(sum[r + 1] - sum[l - 1], u)) { ++r; }
        std::cout << r << " \n"[q == 0];
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
