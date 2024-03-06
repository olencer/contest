#include <iostream>
#include <algorithm>

void solve()
{
    int n;
    std::cin >> n;

    int a[n];
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
        odd += (a[i] & 1);
    }
    int even = n - odd;

    bool close = false;
    std::sort(a, a + n);
    for (int i = 1; i < n; ++i) {
        if(a[i] - a[i - 1] == 1) {
            close = true;
            break;
        }
    }

    if(odd & 1 && even & 1 && !close) {
        std::cout << "NO\n";
    } else {
        std::cout << "YES\n";
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
