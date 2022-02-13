#include <iostream>
#include <vector>
using namespace std;
bool isprime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    vector<int> prime;
    prime.push_back(1);
    for (int i = 2; prime.size() != n + 1; i++) {
        if (isprime(i)) {
            prime.push_back(i);
        }
    }
    int count = 0;
    for (int i = m; i != n + 1; i++) {
        printf("%d", prime[i]);
        if ((++count % 10 == 0) || (i == n))
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}