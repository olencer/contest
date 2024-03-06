#include <iostream>
#include <string>
#include <set>

std::set<std::string> s;

void solve()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        std::string a;
        std::cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < m; ++i) {
        std::string b;
        std::cin >> b;
        s.insert(b);
    }

    int same = n + m - int(s.size());
    n -= same;
    m -= same;

    n += same & 1;
    if(n > m) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
