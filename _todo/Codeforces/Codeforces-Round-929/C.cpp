#include <bits/stdc++.h>

void solve()
{
    int a, b, l;
    std::cin >> a >> b >> l;

    std::set<int> set;
    while (true) {
        int x = l;
        while (true) {
            set.insert(x);
            if(x % b) { break; }
            x /= b;
        }
        set.insert(l);
        if(l % a) { break; }
        l /= a;
    }

    std::cout << set.size() << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) { solve(); }
}
