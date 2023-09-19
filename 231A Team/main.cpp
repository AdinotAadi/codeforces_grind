#include <bits/stdc++.h>

int main() {
    int i, n, p, v, t, count = 0;
    std::cin >> n;
    for(i = 0; i < n; i++) {
        std::cin >> p >> v >> t;
        if((p || v || t) && ((p&&v) || (p && t) || (v && t))) {
            count ++;
        }
    }
    std::cout << count;
    return 0;
}