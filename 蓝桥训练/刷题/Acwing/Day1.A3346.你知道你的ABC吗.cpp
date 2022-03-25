#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long LL;
LL arr[10];

int main() {
    // 输入这几个数
    for (int i = 0; i < 7; i++) cin >> arr[i];

    sort(arr, arr + 7);

    for (int i = 0; i < 7; i++)
        for (int j = i + 1; j < 7; j++)
            for (int k = j + 1; k < 7; k++) {
                if (arr[i] + arr[j] + arr[k] == arr[6] &&
                    ((arr[i] + arr[j] == arr[5]) || arr[j] + arr[k] == arr[5] ||
                     arr[i] + arr[j] == arr[5])) {
                    cout << arr[i] << ' ' << arr[j] << ' ' << arr[k] << endl;
                    return 0;
                }
            }

    return 0;
}