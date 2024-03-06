#include <iostream>
#include <string>
#include <cctype>

void solve()
{
    int n;
    std::string s;
    std::cin >> n >> s;

    bool alpha;
    int cnt = 0;
    int max = 0;
    int num = 0;
    bool p = false;
    for (int i = 0; i < n; ++i) {
        if((alpha = isalpha(s[i]))) { ++cnt; }
        if(!p) { max = std::max(max, cnt); }
        if(alpha) { continue; }

        if(s[i] == '(') {
            p = true;
        } else if(s[i] == ')') {
            p = false;
            if(cnt) { ++num; }
        } else {
            if(p && cnt) { ++num; }
        }
        cnt = 0;
    }

    std::cout << max << ' ' << num << '\n';
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    solve();
}
