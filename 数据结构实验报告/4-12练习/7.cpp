/*
设计一个算法，将链表中所有结点的链接方向“原地”逆转，即要求仅利用原表的存储
空间，换句话说，要求算法的空间复杂度为 0(1)。
*/
#include <iostream>
using namespace std;
// 链表
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

// 逆转
void myReverse(LinkList &LA, LinkList &LC) {
    LNode *pa;
    LNode *pc;
    pa = LA->next;
    pc = LC;
    while (pa) {
        pc = pa;
        pa = pa->next;
        pc->next = LC->next;
        LC->next = pc;
    }
    delete LA;
}

int main() {
    LinkList LA;
    LinkList LB;
    LinkList LC;
    int n;

    cout << "请输入需要创建单链表的长度：" << endl;
    cin >> n;
    cout << "请输入数据:" << endl;
    CreateList(LA, n);

    LC = new LNode;
    LC->next = NULL;

    myReverse(LA, LC);

    cout << "“原地”逆转后:" << endl;
    display(LC);

    return 0;
}