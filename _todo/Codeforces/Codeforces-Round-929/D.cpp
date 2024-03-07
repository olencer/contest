#include <iostream>
#include <algorithm>

const int N = 2e5;

int a[N];

void solve()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) { std::cin >> a[i]; }

    bool yes = false;
    int min = *std::min_element(a, a + n);
    if(std::count(a, a + n, min) == 1) {
        yes = true;
    } else {
        for (int i = 0; i < n; ++i) {
            if(a[i] % min != 0) { yes = true; }
        }
    };

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
