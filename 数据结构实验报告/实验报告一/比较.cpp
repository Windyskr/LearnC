/*定义定一个结构体类型student，写一个函数，根据学号或者成绩，
对包含有n个学生的结构体数组进行排序，
学生的结构体至少包括3个成员（学号，姓名，入学分数等），
比较结构体变量的大小时，可以根据其学号或者分数。
 */
#include <iostream>
using namespace std;

const int N = 100;

struct Stu {
    int id, score;
    string name;
} stu[N];

bool cmp(Stu a, Stu b) { return a.id > b.id; }

int main() {
    for (int i = 0; i < N; i++) {
        cin >> stu[i].id >> stu[i].score >> stu[i].name;
    }
    // 输入函数
    sort(stu, stu + N, cmp);
    for (auto node : stu)
        cout << node.id << ' ' << node.name << ' ' << node.score;
    return 0;
}