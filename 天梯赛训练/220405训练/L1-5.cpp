#include <iostream>
using namespace std;
int scores[] = {0, 5, 5, 10, 10, 15, 15, 20, 20, 25, 25, 25, 25, 30, 30, 30};
int main() {
    int n;
    cin >> n;
    while (n--) {
        int ans = 0, x;
        for (int j = 1; j <= 15; j++) {
            cin >> x;
            if (scores[j] == x) ans++;
        }
        if (ans == 15) {
            cout << "xuan ak la!" << endl;
        } else if (ans > 7) {
            cout << "xuan hai xing ba!" << endl;
        } else if (ans > 0) {
            cout << "xuan jia you ba!" << endl;
        } else if (ans == 0) {
            cout << "xuan bao ling la!" << endl;
        }
    }
    return 0;
}