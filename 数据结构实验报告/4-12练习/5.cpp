/*
设计算法将一个带头结点的单链表 A 分解为两个具有相同结构的链表 B 、C ，
其中 B 表的结点为 A 表中值小于零的结点，而 C 表的结点为 A 表中值大于零的结点
（链表 A 中的元素为非零整数，要求 B 、 C 表利用 A 表的结点
*/
#include <iostream>
using namespace std;
// 链表
typedef struct LNode {
    int date;
    struct LNode *next;
} Lnode, *Linklist;

void init(Linklist &L) {
    L = new Lnode;   // 开辟空间
    L->next = NULL;  //头节点置为空
}
void display(Linklist &T) {
    Linklist p = T;
    p = p->next;
    while (p) {
        cout << p->date;
        p = p->next;
    }
}
// 后插法建表
void CreateLiklist(Linklist &L, int n) {
    Linklist r = L;
    for (int i = 0; i < n; i++) {
        Linklist p = new Lnode;
        cout << "请输入第" << i + 1 << "个数据" << endl;
        cin >> p->date;
        r->next = p;
        p->next = NULL;
        r = p;
    }
}
// 解决
void Resolve(Linklist &La, Linklist &Lb) {
    Linklist pre = La;
    Linklist pb = Lb;
    Linklist pa = La;
    pa = pa->next;
    while (pa) {
        // B 表的结点为 A 表中值小于零的结点
        if (pa->date < 0) {
            Linklist p = new Lnode;
            p = pa;
            //删除这个小于 0 的节点
            pre->next = pa->next;
            pa = pa->next;
            // 后插法插入到 B 表中
            p->next = NULL;
            pb->next = p;
            pb = p;
        } else {
            // 而 C 表的结点为 A 表中值大于零的结点，插入
            pre = pa;
            pa = pa->next;
        }
    }
}
int main() {
    Linklist La, Lb;
    init(La);
    init(Lb);
    int num;
    cout << "请输入元素的个数" << endl;
    cin >> num;
    CreateLiklist(La, num);
    // 操作
    Resolve(La, Lb);
    // 输出结果
    cout << "La:";
    display(La);
    puts("");
    cout << "Lb:";
    display(Lb);
    puts("");
    return 0;
}