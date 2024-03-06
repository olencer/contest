#include <iostream>
#include <string>
#include <array>

void solve()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int res = 0;
    std::array<int, 26> cnt{};
    n = 2 * n - 2;
    for (int i = 0; i < n; i += 2) {
        int key = s[i] - 'a';
        int door = s[i + 1] - 'A';
        ++cnt[key];

        if(!cnt[door]) {
            ++res;
        } else {
            --cnt[door];
        }
    }

    std::cout << res << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
