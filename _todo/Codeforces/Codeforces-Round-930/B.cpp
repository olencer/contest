#include <bits/stdc++.h>

void solve()
{
    int n;
    std::string a[2];
    std::cin >> n >> a[0] >> a[1];

    int  min = 0, max = n - 1;

    for(int i = n - 1; i >= 1; --i) {
        if(a[0][i] == '1' && a[1][i - 1] == '0') { max = i - 1; }
    }
    for(int i = 0; i < max; ++i) {
        if(a[1][i] == '1' && a[0][i + 1] == '0') { min = i + 1; }
    }

    for(int i = 0; i <= max; i++) { std::cout << a[0][i]; }
    for(int i = max; i < n; i++) { std::cout << a[1][i]; }
    std::cout << '\n';
    std::cout << max - min + 1 << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
