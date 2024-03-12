#include <bits/stdc++.h>

void solve()
{
    int n;
    std::string s;
    std::cin >> n >> s;

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n - 2; ++i) {
        if(s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
            ++a;
            if(i < n - 4 && s[i + 3] == 'i' && s[i + 4] == 'e') {
                ++c;
            }
        }
        if(s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            ++b;
        }
    }

    std::cout << a + b - c << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
