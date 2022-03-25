#include <algorithm>
#include <cstring>
#include <iostream>

#define MAX_LENGTH 256

int giListSize = 1;

// 链表中结点类型为以顺序表存储的字符串

typedef struct NODE {
    char name[MAX_LENGTH];
    int last;
    struct NODE *next;
} NODE;

// 打印链表中所有结点（一行一个）

void print_list(NODE *pListHead) {
    NODE *pTemp = pListHead;
    while (pTemp) {
        printf("%s\n", pTemp->name);
        pTemp = pTemp->next;
    }
}

// 销毁链表

void destroy_list(NODE *pListHead) {
    NODE **pNodes = (NODE **)malloc(giListSize * sizeof(NODE *));
    NODE *pTemp = pListHead;
    int i = 0;
    while (pTemp) {
        pNodes[i++] = pTemp;
        pTemp = pTemp->next;
    }
    for (i = (giListSize - 1); i >= 0; i--) free(pNodes[i]);
    free(pNodes);
}
// 插入一个字符到一个链表结点中

int insert_char(NODE *pNode, int i, char c) {
    if (!pNode || i < 1 || i > pNode->last + 1 || pNode->last >= MAX_LENGTH)
        return 0;
    for (int m = pNode->last; m >= i; m--) pNode->name[m] = pNode->name[m - 1];
    pNode->name[i - 1] = c;
    pNode->last++;
    pNode->name[pNode->last] = '\0';
    return 1;
}

// 删除结点中的一个字符

int delete_char(NODE *pNode, int i) {
    if (!pNode || i < 1 || i > pNode->last || pNode->last == 0) return 0;
    for (int m = i; m < pNode->last; m++) pNode->name[m - 1] = pNode->name[m];
    pNode->last--;
    pNode->name[pNode->last] = '\0';
    return 1;
}
//

// 查找链表的第i个结点
NODE *get_node(NODE *pListHead, int i) {
    int m;
    NODE *pResult = pListHead;
    if (!pResult || i < 0) return NULL;
    for (m = 0; m < i && pResult; m++) pResult = pResult->next;
    return pResult;
}

// 插入一个结点到链表第i个结点之前

int insert_node(NODE *pListHead, char *pName, int i) {
    NODE *pTemp, *pNode = (NODE *)malloc(sizeof(NODE));
    if (!pListHead || !pName || i < 0 || !pNode) return 0;
    strcpy(pNode->name, pName);
    pNode->last = strlen(pName);
    pTemp = get_node(pListHead, i - 1);
    if (!pTemp) return 0;
    pNode->next = pTemp->next;
    pTemp->next = pNode;
    giListSize++;
    return 1;
}

// 删除链表中的第i个结点

int delete_node(NODE *pListHead, int i) {
    NODE *pTemp, *pNode;
    if (!pListHead || i < 0) return 0;
    pTemp = get_node(pListHead, i - 1);
    if (!pTemp) return 0;
    pNode = pTemp->next;
    if (pNode) {
        pTemp->next = pNode->next;
        free(pNode);
    }
    giListSize--;
    return 1;
}

int con_node(NODE *pListHead, int j, int k) {
    NODE *pTemp1, *pTemp, *pNode, *pTemp2;
    if (!pListHead || j < 0 || k < 0 || j == k) return 0;
    pTemp1 = get_node(pListHead, j);
    // char *c= pTemp1->name;
    pTemp2 = get_node(pListHead, k);
    // char *d= pTemp2->name;
    strcat(pTemp1->name, pTemp2->name);
    delete_node(pListHead, k);
    return 1;
}

int main() {
    int iChoice, iNIndex, iCIndex;
    char cChar;
    char name[MAX_LENGTH];
    NODE *pTemp = NULL;
    // 创建头结点
    NODE *pListHead = (NODE *)malloc(sizeof(NODE));
    if (!pListHead) return 0;
    strcpy(pListHead->name, "head");
    pListHead->last = 4;
    pListHead->next = NULL;
    // 插入两节点，打印链表
    strcpy(name, "data");
    insert_node(pListHead, name, giListSize);
    strcpy(name, "structure");
    insert_node(pListHead, name, giListSize);
    printf(
        "\n******** 欢迎使用线性表操作演示程序！ "
        "********\n当前链表结点依次为：\n");
    print_list(pListHead);
    // 删除
    bool Delete(int idx) {
        if (idx < 0 || idx > last) return false;
        for (int i = idx; i < last; i--) {
            a[i] = a[i + 1];
        }
        a[last - 1] = 0;
        last--;
        return true;
    }
    // 遍历
}