#include <iostream>
#include <vector>

void solve()
{
    int n;
    std::cin >> n;

    int a[n];
    std::vector<bool> visited(n + 1);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    bool yes = true;
    for (int i = 0; i < n; ++i) {
        while (a[i] > n || visited[a[i]]) { a[i] >>= 1; }
        if(a[i]) {
            visited[a[i]] = true;
        } else {
            yes = false;
            break;
        }
    }

    std::cout << (yes ? "YES" : "NO") << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
