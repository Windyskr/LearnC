/*（4）有10个学生，每个学生的数据包括学号、姓名、3门课的成绩，
从键盘输入10个学生数据，要求打印出3门课的总平均成绩，
以及最高分的学生的数据（包括学号、姓名、3门课成绩、平均分数）。*/
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
    for (int i = 0; i < 9; i++) {
        printf("请输入第%d个学生的信息\n", i + 1);
        scanf("%d %s %f %f %f", &s[i].id, s[i].name, &s[i].course1,
              &s[i].course2, &s[i].course3);
        s[i].ave = ((s[i].course1 + s[i].course2 + s[i].course3) / 3);
    }
    int max = 0;
    int maxi;
    for (int i = 0; i < 9; i++) {
        printf("学生%d的平均成绩是%f", i + 1, s[i].ave);
        if (s[i].ave > maxi) {
            max = s[i].ave;
            maxi = i;
        }
    }
    printf("最高分同学的学号%d、姓名%s、3门课成绩%.2f %.2f %.2f,平均分数%.2f ",
           s[maxi].id, s[maxi].name, s[maxi].course1, s[maxi].course2,
           s[maxi].course3, s[maxi].ave);
    return 0;
}