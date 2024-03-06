#include <iostream>
#include <vector>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    std::vector<int> res(n + 1);
    std::vector<int> last(n + 1);
    for (int i = 1; i <= n; ++i) {
        int c;
        std::cin >> c;
        if(!last[c] || ((i - last[c]) & 1)) { ++res[c]; }
        last[c] = i;
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
