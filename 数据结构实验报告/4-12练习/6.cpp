/*
设计一个算法，通过一趟遍历确定长度为 n 的单链表中值最大的结点。
*/
#include <iostream>
using namespace std;
// 链表
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

// 尾插法
void CreateList(LinkList &L, int n) {
    LNode *p;
    int i;
    LNode *r;
    L = new LNode;
    L->next = NULL;
    r = L;
    for (i = 0; i < n; ++i) {
        p = new LNode;
        cin >> p->data;
        p->next = NULL;
        r->next = p;
        r = p;
    }
}
// 找最大值
int findMax(LinkList L) {
    LNode *p;
    p = L->next;
    int theMax = p->data;
    while (p->next) {
        if ((p->next->data) > theMax) theMax = p->next->data;
        p = p->next;
    }
    return theMax;
}
int main() {
    LinkList L;
    int n;
    int e;

    cout << "请输入单链表A的长度:" << endl;
    cin >> n;
    cout << "请输入数据:" << endl;
    CreateList(L, n);

    cout << "最大值为：" << findMax(L) << endl;

    return 0;
}