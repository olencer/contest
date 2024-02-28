#include <bits/stdc++.h>

void solve()
{
    int n;
    std::cin >> n;

    std::array<int, 3> cnt{};
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        cnt[a % 3]++;
    }

    int res = (cnt[1] + 2 * cnt[2]) % 3;
    if(res == 0) {
        res = 0;
    } else if(res == 2) {
        res = 1;
    } else {
        if(cnt[1]) {
            res = 1;
        } else {
            res = 2;
        }
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
