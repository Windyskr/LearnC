// 使用指针和引用两种方式，完成两个学生的交换。
#include <iostream>
using namespace std;

void my_swap(int *p1, int *p2) {
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main() {
    int a, b;
    cin >> a >> b;
    my_swap(&a, &b);
    return 0;
}