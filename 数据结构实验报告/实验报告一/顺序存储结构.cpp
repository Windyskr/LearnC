#include <iostream>
using namespace std;
const int N = 1000;
// 完成线性表的基本操作，插入、删除、查找，遍历、以及线性表合并等运算在顺序存储结构和链接存储结构上的运算。

// 创建线性表
int a[N];
int last;
// 插入 位置是 idx 数字是 n
bool Insert(int idx, int n) {
    if (idx < 0 || idx > N) return false;
    for (int i = last; i >= idx; i--) {
        a[i + 1] = a[i];
    }
    a[idx] = n;
    last++;
    return true;
}

// 删除
bool Delete(int idx) {
    if (idx < 0 || idx > last) return false;
    for (int i = idx; i < last; i--) {
        a[i] = a[i + 1];
    }
    a[last - 1] = 0;
    last--;
    return true;
}

// 遍历

int main() {}