/*
（10）已知长度为 n 的线性表 A 采用顺序存储结构，请写一个时间复杂度为
Q(n)、室间复杂度为 o(1)的算法，该算法可删除线性表中所有值为 item 的数据元素。
*/

#include <iostream>
using namespace std;
#define MAXSIZE 1000
// 顺序表
typedef struct {
    int *elem;
    int length;
} SqList;

//创建
void CreateList(SqList &L) {
    int i;
    L.elem = new int[MAXSIZE];
    if (!L.elem) cout << "创建失败!" << endl;
    cout << "请输入线性表的长度,不能大于" << MAXSIZE << ':' << endl;
    cin >> L.length;
    cout << "请依次输入表中元素：" << endl;
    for (i = 0; i < L.length; i++) cin >> L.elem[i];
    cout << "创建完成！" << endl;
}

void display(SqList L) {
    int i;
    for (i = 0; i < L.length; i++) {
        if (i == L.length - 1)
            cout << L.elem[i];
        else
            cout << L.elem[i] << ' ';
    }
}

void acDelete(SqList &L, int item) {
    int i = 0;
    int j = 0;
    int k;
    int count = 0;
    for (k = 0; k < L.length; k++) {
        if (L.elem[k] != item) {
            L.elem[j] = L.elem[i];
            i++;
            j++;

        } else {
            i++;
            count++;
        }
    }
    L.length -= count;
}
int main() {
    SqList L;
    int item;

    CreateList(L);

    cout << "请输入item" << endl;
    cin >> item;

    acDelete(L, item);

    cout << "选择删除后线性表为：" << endl;
    display(L);
    puts("");

    return 0;
}