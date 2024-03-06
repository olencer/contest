#include <iostream>
#include <string>

void solve()
{
    std::string s;
    std::cin >> s;

    int res = 0;
    int cnt = 0;
    auto n = s.size();
    for (int i = 0; i < n; ++i) {
        ++cnt;
        if(s[i] == 'R') {
            res = std::max(res, cnt);
            cnt = 0;
        }
    }
    res = std::max(res, cnt + 1);

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
