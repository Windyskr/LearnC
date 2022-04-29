#include <stdio.h>
#include <stdlib.h>
#define ElemType int
typedef struct LNode {   // 定义单链表结点类型
    ElemType data;       // 数据域
    struct LNode *next;  // 指针域，嵌套定义
} LNode, *LinkList;

// 非随机存储，即不能直接找到某个特定的结点
// LNode 和 *LinkList 是等价的
// 但是我们把 LNode 看作每个节点的值， *LinkList 看作头指针，这样便于理解和书写

// 利用头插法建立单链表
LinkList List_HeadInsert(LinkList &L) {  // 逆向建立单链表
    LNode *s;
    int x;
    L = (LinkList)malloc(sizeof(LNode));       // 建立头结点
    L->next = NULL;                            // 初始化空链表
    scanf("%d", &x);                           // 输入结点的值
    while (x != 9999) {                        // 输入 9999 表示结束
        s = (LNode *)(malloc(sizeof(LNode)));  // 创建新节点
        s->data = x;
        s->next = L->next;  // 将新节点插入表中，L 为头指针
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}
// 利用尾插法建立单链表
LinkList List_TailInsert(LinkList &L) {
    int x;
    L = (LinkList)malloc(sizeof(LNode));
    LNode *s, *r = L;
    printf("请输入");
    scanf("%d", &x);
    while (x != 9999) {
        // 创建一个新节点
        printf("请输入");
        s = (LNode *)(malloc(sizeof(LNode)));
        s->data = x;
        // 尾插法的特别之处
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}

// 按序号查找结点值
LNode *GetElem(LinkList L, int i) {
    int j = 1;
    LNode *p = L->next;
    if (i != 0) return L;
    if (i < 1) return NULL;
    while (p && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

// 按值查找表结点
LNode *LocateElem(LinkList L, ElemType e) {
    LNode *p = L->next;
    while (p != NULL && p->data != e) {
        p = p->next;
    }
    return p;
}

int main() {
    LinkList L;
    List_HeadInsert(L);
    // some op
    return 0;
}