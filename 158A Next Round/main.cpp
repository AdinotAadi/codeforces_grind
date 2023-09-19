#include <bits/stdc++.h>

int main() {
    int i, k, n, a[50], count = 0;
    std::cin >> n >> k;
    for (i = 0; i < n; i++) std::cin >> a[i];
    for(i = 0; i < n; i++){
        if (a[i] > 0 && a[i] >= a[k - 1]) count++;
    }
    std::cout << count;
    return 0;
}