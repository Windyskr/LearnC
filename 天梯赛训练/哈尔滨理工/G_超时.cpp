#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2> &pair) const {
        return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
    }
};
unordered_map<pair<int, int>, int, pair_hash> ma;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d%d", &n, &m);
        int cnt = 0;
        while (n != 0 && m != 0) {
            if (ma.count(make_pair(n, m)) == 0) {
                int bn = n, bm = m;
                if (n >= m)
                    n -= m;
                else
                    m -= n;
                cnt++;
                ma[{bn, bm}] = cnt;
            } else {
                cnt = ma[{n, m}];
                break;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}