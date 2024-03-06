#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

const int N = 1e3;

int n;
std::pair<int, int> r[N];
std::vector<bool> visited;

bool pair_cmp(const std::pair<int, int> & a,
              const std::pair<int, int> & b) {
    if(a.first != b.first) {
        return a.first < b.first;
    } else {
        return a.second > b.second;
    };
};

void solve()
{
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, y;
        std::cin >> x >> y;
        r[i] = {x, y};
    }

    std::sort(r, r + n, pair_cmp);
    for (int i = 0; i < n; ++i) {
        int res;
        if(i < n - 1 && r[i].first == r[i + 1].first) {
            res = r[i + 1].second + 1;
        } else {
            res = r[i].first;
        }

        std::cout << r[i].first << ' ' << r[i].second << ' ' << res << '\n';
    }
    std::cout << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
