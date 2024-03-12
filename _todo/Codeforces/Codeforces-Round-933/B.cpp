#include <bits/stdc++.h>

const int N = 2E5;

int a[N];

void solve()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) { std::cin >> a[i]; }

    bool yes = true;
    for (int i = 1; i < n - 1; ++i) {
        if(a[i] - 2 * a[i - 1] < 0 || a[i + 1] - a[i - 1] < 0) {
            yes = false;
            break;
        }
        a[i] -= (a[i - 1] << 1);
        a[i + 1] -= a[i - 1];
        a[i - 1] = 0;
    }

    if(yes &&
       (a[n - 1] != a[n - 3] || (a[n - 1] << 1) != a[n - 2] || a[n - 1] <0)) {
        yes = false;
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
