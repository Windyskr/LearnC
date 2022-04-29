#include <iostream>
#define ElemType int
using namespace std;
typedef struct LNode {   // 定义单链表结点类型
    ElemType data;       // 数据域
    struct LNode *next;  // 指针域，嵌套定义
} LNode, *LinkList;
// 初始化
void Init(LinkList &L) {
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
}
// 头插
void Head_Insert(LinkList &L, ElemType x) {
    LNode *q;
    q = (LNode *)malloc(sizeof(LNode));
    q->data = x;
    q->next = L->next;
    L->next = q;
}
// 尾插
void Tail_Insert(LinkList &L, ElemType x) {
    LNode *q = L, *r;
    // 别忘记了分配空间
    r = (LNode *)malloc(sizeof(LNode));
    while (q->next != NULL) q = q->next;
    q->next = r;
    r->data = x;
    r->next = NULL;
}

// 展示
void dis(LinkList &L) {
    LNode *p = L->next;
    printf("Display\n");
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    puts("");
}
// 1.设计一个递归算法，删除不带头结点的单链表 1 中所有值为 x 的结点。
void del_x_nohead(LinkList &L, ElemType x) {
    LNode *p;
    if (L == NULL) return;
    if (L->data == x) {
        // 删除
        p = L;
        L = L->next;
        free(p);
        del_x_nohead(L, x);
    } else {
        del_x_nohead(L->next, x);
    }
}
/* 2.在带头结点的单链表 L 中，删除所有值为 x 的结点，并释放其空间，
假设值为x的结点不唯一，试编写算法以实现上述操作。*/
void del_x_head(LinkList &L, ElemType x) {
    // 初始化当前节点p ，前一个 L
    LNode *p = L->next, *pre = L, *q;
    while (p != NULL) {
        if (p->data == x) {
            // 把 p 存下来，方便 free
            q = p;
            // p 指向下一个
            p = p->next;
            pre->next = p;
            free(q);
        } else {
            pre = p;
            p = p->next;
        }
    }
}
void del_x_head2(LinkList &L, ElemType x) {
    // 初始化
    LNode *p = L->next, *r = L, *q;
    while (p != NULL) {
        if (p->data == x) {
            // 释放
            q = p;
            p = p->next;
            free(q);
        } else {
            // 尾插法
            r->next = p;
            r = p;
            p = p->next;
        }
    }
}
// 3.设 L 为带头结点的单链表，编写算法实现从尾到头反向输出每个结点的值。
// 把 L 当作一个新的链表，使用头插法进行插入，很巧妙！
void R_print(LinkList &L) {
    LNode *p = L->next, *q;
    L->next = NULL;
    // 头插法
    while (p != NULL) {
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
}
// 使用栈的方式（或者说递归），非常巧妙！！！（P47
void R_print_stack(LinkList &L) {
    if (L->next != NULL) R_print_stack(L->next);
    if (L != NULL) printf("%d ", L->data);
}
void R_print_Head(LinkList &L) {
    // 记得除去头节点
    if (L->next != NULL) R_print_stack(L->next);
}

// 4.试编写在带头结点的单链表L中删除一个最小值结点的高效算法(假设最小值结点是唯一的)
void del_min(LinkList &L) {
    // 首先找到最小的点，记录它的前驱
    if (L->next == NULL) return;
    int minn = L->next->data;
    // cout << minn << endl;
    LNode *mp = L, *p = L->next;
    LNode *q = L->next;
    while (q != NULL) {
        // 如果比已知小
        if (q->data < minn) mp = p, minn = q->data;
        p = q;
        q = q->next;
    }
    // 再删除这个点
    q = mp->next;
    mp->next = mp->next->next;
    free(q);
}
// 5.试编写算法将带头结点的单链表就地逆置，所谓“就地”是指辅助空间复杂度为O(1)。
void Reverse_1(LinkList &L) {
    LNode *p = L->next, *q;
    L->next = NULL;
    while (p != NULL) {
        q = p->next;
        p->next = L->next;
        L->next = p;
        p = q;
    }
}

void Reverse_2(LinkList &L) {
    LNode *pre, *p = L->next, *r = p->next;
    p->next = NULL;
    while (r != NULL) {
        pre = p;
        p = r;
        r = r->next;
        p->next = pre;
    }
    L->next = p;
}
// 6.有一个带头结点的单链表L, 设计一个算法使其元素递增有序。

/* 7.设在一个带表头结点的单链表中所有元素结点的数据值无序，试编写一个函数，删除表
中所有介于给定的两个值(作为函数参数给出) 之间的元素的元素(若存在).*/
// 8.给定两个单链表，编写算法找出两个链表的公共结点。
// 共 25 题
int main() {
    LinkList L;
    Init(L);
    Tail_Insert(L, 1);
    Tail_Insert(L, 2);
    Tail_Insert(L, 3);
    Tail_Insert(L, 4);
    Tail_Insert(L, 5);
    Tail_Insert(L, 6);
    dis(L);
    // some op
    Reverse_2(L);
    //
    dis(L);
    return 0;
}