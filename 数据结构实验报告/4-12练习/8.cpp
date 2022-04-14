/*
设计一个算法，删除递增有序链表中值大于 mink 且小于 maxk 的所有元素
(mink 和 maxk是给定的两个参数，其值可以和表中的元素相同，也可以不同)。
*/

#include <iostream>
using namespace std;

typedef struct LNode {
    int data;
    LNode *next;
} LNode, *LinkList;

// 尾插法
int CreateList(LinkList &L, int n) {
    LNode *p, *r;
    int i;
    L = new LNode;
    L->next = NULL;
    r = L;
    for (i = 0; i < n; i++) {
        p = new LNode;
        cin >> p->data;
        p->next = NULL;
        r->next = p;
        r = p;
    }
    return 0;
}

void display(LinkList L) {
    LNode *p;
    p = L->next;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    puts("");
}

// 选择删除
void ChooseList_L(LinkList &LA, int mink, int maxk) {
    LNode *pa;
    LNode *p;
    pa = LA->next;
    p = LA;

    while (pa) {
        if ((pa->data <= mink) || (pa->data >= maxk)) {
            pa = pa->next;
            p = p->next;

        } else {
            pa = pa->next;
            p->next = pa;
        }
    }
}

int main() {
    LinkList LA;
    int n;
    int mink;
    int maxk;

    cout << "请输入长度:" << endl;
    cin >> n;
    cout << "请输入数据:" << endl;
    CreateList(LA, n);

    cout << "输入mink和maxk:" << endl;
    cin >> mink;
    cin >> maxk;

    ChooseList_L(LA, mink, maxk);

    cout << "单链表为:" << endl;
    display(LA);

    return 0;
}