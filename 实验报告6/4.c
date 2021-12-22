/*（4）有10个学生，每个学生的数据包括学号、姓名、3门课的成绩，
从键盘输入10个学生数据，要求打印出3门课的总平均成绩，
以及最高分的学生的数据（包括学号、姓名、3门课成绩、平均分数）。*/
/* 测试数据
1 name1 100 200 300
2 name2 100 200 300
3 name3 100 200 300
4 name4 100 100 100
5 name5 100 100 100
6 name6 200 100 100
7 name7 0 10 100
8 name8 100 1000 1000000
9 name9 100.1 10 100
10 name10 0.1 1000 100000
*/
#include <stdio.h>
struct student {
    int id;
    char name[10];
    float course1;
    float course2;
    float course3;
    float ave;
} s[9];
int main() {
    for (int i = 0; i < 10; i++) {
        // printf("请输入第%d个学生的信息\n", i + 1);
        scanf("%d %s %f %f %f", &s[i].id, s[i].name, &s[i].course1,
              &s[i].course2, &s[i].course3);
        s[i].ave = ((s[i].course1 + s[i].course2 + s[i].course3) / 3);
    }
    int max = 0;
    int maxi;
    for (int i = 0; i < 10; i++) {
        printf("学生%d的平均成绩是%.2f\n", i + 1, s[i].ave);
        if (s[i].ave > max) {
            max = s[i].ave;
            maxi = i;
        }
    }
    printf("最高分同学的学号%d、姓名%s、3门课成绩%.2f %.2f %.2f,平均分数%.2f\n",
           s[maxi].id, s[maxi].name, s[maxi].course1, s[maxi].course2,
           s[maxi].course3, s[maxi].ave);
    return 0;
}
