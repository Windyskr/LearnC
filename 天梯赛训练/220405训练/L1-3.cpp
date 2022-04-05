#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    string a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        if (a == b) cout << "Repetition" << endl;
        if (a == "Scissors" && b == "Paper") cout << "Player1" << endl;
        if (a == "Scissors" && b == "Rock") cout << "Player2" << endl;
        if (a == "Paper" && b == "Rock") cout << "Player1" << endl;
        if (a == "Paper" && b == "Scissors") cout << "Player2" << endl;
        if (a == "Rock" && b == "Scissors") cout << "Player1" << endl;
        if (a == "Rock" && b == "Paper") cout << "Player2" << endl;
    }
    return 0;
}