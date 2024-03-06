#include <iostream>
#include <unordered_map>
#include <string>

void solve()
{
    int n;
    std::cin >> n;

    std::unordered_map<std::string, std::string> res;
    for (int i = 0; i < n; ++i) {
        std::string old, now;
        std::cin >> old >> now;
        res.emplace(old, now);
    }

    for(auto it = res.begin(); it != res.end(); ++it) {
        while (true) {
            auto x = res.find(it->second);
            if(x == res.end()) { break; }

            it->second = x->second;
            res.erase(x);
        }
    }

    std::cout << res.size() << '\n';
    for (auto [old, now] : res) {
        std::cout << old << ' ' << now << '\n';
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
