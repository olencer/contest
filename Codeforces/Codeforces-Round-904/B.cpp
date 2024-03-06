#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void solve()
{
    int n;
    std::string s;
    std::cin >> n >> s;

    int cnt = 0;
    std::vector<int> pos;
    for (int i = 0; i < n; ++i) {
        if(s[i] == '0') {
            ++cnt;
            pos.push_back(i);
        }
    }

    int x = cnt;
    int r = n - 1;
    int64_t sum = 0;
    std::vector<int64_t> res(cnt);
    for (int i = 0; i < cnt; ++i) {
        int64_t l = n - i - 1;
        while (r >= l) {
            sum += l - pos[--x];
            --r;
        }

        res[i] = sum;
    }

    for (int i = 0; i < cnt; ++i) {
        std::cout << res[i] << " \n"[i == n - 1];
    }
    for (int i = cnt; i < n; ++i) {
        std::cout << "-1" << " \n"[i == n - 1];
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
