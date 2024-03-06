#include <bits/stdc++.h>

void solve()
{
    int n;
    std::string s;
    std::cin >> n >> s;

    int l = 0, r = s.size() - 1;
    while (l < r && s[l] == s[r]) { ++l, --r; }

    if(s[l] <= s[r]) {
        std::cout << s << '\n';
    } else {
        std::reverse(s.begin(), s.end());
        std::cout << s;
        std::reverse(s.begin(), s.end());
        std::cout << s << '\n';
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
