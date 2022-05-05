#include <iostream>
using namespace std;
#define MaxSize 50
#define Elemtype int
typedef struct {
    Elemtype data[MaxSize];  // 最大个数
    int top;                 // 栈顶指针
} Sqstack;
// 初始化，注意这是 -1
// 没有特殊著名就是 -1
void InitStack(Sqstack &S) { S.top = -1; }
//  判断栈空
bool StackEmpty(Sqstack S) {
    if (S.top == -1)
        return true;
    else
        return false;
}
// 进栈
bool Push(Sqstack &S, Elemtype x) {
    if (S.top == MaxSize - 1) return false;
    S.data[++S.top] = x;
    return true;
}
// 出栈
bool Pop(Sqstack &S, Elemtype &x) {
    if (S.top == -1) return false;
    x = S.data[S.top--];
    return false;
}
// 读栈顶元素
bool GetTop(Sqstack S, Elemtype &x) {
    if (S.top == -1) return false;
    x = S.data[S.top];
    return true;
}
