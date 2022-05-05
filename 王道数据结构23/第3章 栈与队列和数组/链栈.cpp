#include <iostream>
using namespace std;
#define Elemtype int
// 这是和单链表一样的定义方式！
// 唯一需要注意的是它的 next 指针是反着的
// Lhead（也有可能没有 --next--> top --next--> 下一个 --next--> 底部
typedef struct Linknode {
    Elemtype data;
    struct Linknode *next;
} * LiStack;