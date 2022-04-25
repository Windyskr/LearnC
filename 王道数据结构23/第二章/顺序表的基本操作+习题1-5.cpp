#include <iostream>
using namespace std;
#define MaxSize 50
#define ElemType int
// 静态分配
typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

// 静态分配的初始化表函数 书上没说，视频中的P8 6:35讲了
void InitList(SqList &L) {
    for (int i = 0; i < MaxSize; i++) L.data[i] = 0;
    L.length = 0;
}

// (1) 插入操作
// 在顺序表 L 的第 i （1 <= i <= L.length+1 ) 个位置（指的是位序）插入新元素 e。
bool ListInsert(SqList &L, int i, ElemType e) {
    // 判断 i 的范围是否有效
    if (i < 1 || i > L.length + 1) return false;
    // 当前存储空间已满，不能插入
    if (L.length >= MaxSize) return false;
    // 将第 i 个元素及之后的元素后移
    for (int j = L.length; j >= i; j--) L.data[j] = L.data[j - 1];
    // 在位置 i 处放入 e
    L.data[i - 1] = e;
    // 线性表长度加 1
    L.length++;
    return true;
}
// 要区别顺序表的位序（从 1 开始）和数组下标（从 0 开始）

// (3) 删除操作
// 删除顺序表 L 中的第 i （1 <= i <= L.length) 个位置的元素，用引用变量 e 返回。
bool ListDelete(SqList &L, int i, ElemType &e) {
    // 判断 i 的范围是否有效
    if (i < 1 || i > L.length) return false;
    // 将被删除的元素赋值给 e
    e = L.data[i - 1];
    // 将第 i 个位置后的元素前移
    for (int j = i; j < L.length; j++) L.data[j - 1] = L.data[j];
    // 线性表的长度减 1
    L.length--;
    return false;
}

// (2) 按值查找（顺序查找）
// 在顺序表 L 中查找第一个元素值等于 e 的元素，并返回其位序
int LocateElem(SqList L, ElemType e) {
    int i;
    for (int i = 0; i < L.length; i++)
        if (L.data[i] == e)
            return i + 1;  // 下标位 i 的元素值等于 e ，返回其位序 i + 1
    // 再次注意位序和数组下标的区别
    return 0;
}

// 二、综合应用题

/*
01. 从顺序表中删除具有最小值的元素(假设唯一)并由函数返回被删元素的值。空出的位
置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行。
*/
bool Del_Min(SqList &L, ElemType &value) {
    if (L.length == 0) return false;
    value = L.data[0];
    int pos = 0;
    // 从前往后查找，找最小元
    for (int i = 0; i < L.length; i++)
        if (L.data[i] < value) {
            value = L.data[i];
            pos = i;
        }
    // 空出的位置由最后一个元素填补
    L.data[pos] = L.data[L.length - 1];
    L.length--;
    return true;
}

/*
02. 设计一个高效算法，将顺序表 L 的所有元素逆置，要求算法的空间复杂度为 0(1)。
*/
void reverse_L(SqList &L) {
    for (int i = 0; i < L.length / 2; i++) {
        // 交换
        int t = L.data[i];
        L.data[i] = L.data[L.length - 1 - i];
        L.data[L.length - 1 - i] = t;
    }
}
/*
03. 对长度为 n 的顺序表 L, 编写一个时间复杂度为 O(n)、空间复杂度为
0(1)的算法，该算法删除线性表中所有值为 x 的数据元素。
*/
void del_x_1(SqList &L, ElemType x) {
    int k = 0, i;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] != x) {
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
}

void del_x_2(SqList &L, ElemType x) {
    // k 的记录者等于 x 的元素个数
    int k = 0, i = 0;
    while (i < L.length) {
        if (L.data[i] == x)
            k++;
        else
            L.data[i - k] = L.data[i];  // 当前元素前移 k 个位置
        i++;
    }
    // 顺序表 L 的长度递减
    L.length = L.length - k;
}
// 双指针法
void del_x_3(SqList &L, ElemType x) {
    // 借鉴快速排序的思路
    int i = -1, j = L.length;
    while (i < j) {
        // 找第一个 x
        do i++;
        while (L.data[i] != x);
        // 找最后一个不是 x 的
        do j--;
        while (L.data[j] == x);
        if (i < j) {
            int t = L.data[i];
            L.data[i] = L.data[j];
            L.data[j] = t;
        }
    }
    L.length = i;
    return;
}
/*
04. 从有序顺序表中删除其值在给定值 s 与 t 之间(要求 s < t) 的所有元素，若
s 或 t 不合理或顺序表为空，则显示出错信息并退出运行。
*/
bool del_s_t_1(SqList &L, ElemType s, ElemType t) {
    // 有序顺序表
    if (s >= t) return false;
    if (L.length == 0) return false;
    int i = -1, k = L.length;
    do i++;
    while (L.data[i] <= s);
    do k--;
    while (L.data[k] >= t);
    int idx = 0;
    for (int j = i; j < L.length - k - 1; j++) {
        L.data[i] = L.data[k + i];
    }
    L.length = i - 1 + (L.length - k);
    return true;
}

/*
05. 从顺序表中删除其值在给定值 s与 t 之间(包含 s 和 t, 要求 s < t)
的所有元素，若 s 或 t 不合理或顺序表为空，则显示出错信息并退出运行。
*/
bool del_s_t_2(SqList &L, ElemType s, ElemType t) {
    // 只是顺序表
    if (s >= t) return false;
    if (L.length == 0) return false;
    int i, k = 0;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] <= s || L.data[i] >= t) {
            L.data[k] = L.data[i];
            k++;
        }
    }
    L.length = k;
    return true;
}

void display(SqList &L) {
    for (int i = 0; i < L.length; i++) cout << L.data[i] << ' ';
    return;
}
int main() {
    SqList L;
    InitList(L);
    ListInsert(L, 1, 8);
    ListInsert(L, 1, 7);
    ListInsert(L, 1, 6);
    ListInsert(L, 1, 5);
    ListInsert(L, 1, 4);
    ListInsert(L, 1, 3);
    ListInsert(L, 1, 2);
    ListInsert(L, 1, 1);
    display(L);
    puts("");
    // 一些操作
    del_s_t_1(L, 1, 8);
    //
    display(L);
    puts("");
    return 0;
}