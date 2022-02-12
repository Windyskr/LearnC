#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    // printf("m=%d", m);
    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while (m--) {
        for (int i = (n - 1); i != -1; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = arr[n];
        arr[n] = 0;
        // for (auto it = arr.begin(); it != arr.end(); it++) {
        //     printf("%d ", *it);
        // }
        // printf("\n");
    }
    arr.resize(n);
    n--;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        printf("%d", *it);
        if (n--) printf(" ");
    }
    printf("\n");
    return 0;
}