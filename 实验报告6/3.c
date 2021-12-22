/* （3）设有6位职工，职工信息的包括：职工号、姓名、性别、身份证号、工资，
计算并输出所有职工工资的平均值和最高工资的职工。*/
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
10 name10 0.1 1000 100000*/
#include <stdio.h>
struct staff {
    int num;
    char name[20];
    int sex;
    long id;
    float salary;
} s[5];
int main() {
    float aveSalary = 0;
    float maxSalary = 0;
    int max = 0;
    for (int i = 0; i < 5; i++) {
        aveSalary += s[i].salary / 6;
        if (s[i].salary > maxSalary) {
            maxSalary = s[i].salary;
            max = i;
        }
    }
    printf("所有职工工资的平均值是%f，最高工资的职工的id是%ld\n", aveSalary,
           s[max].id);
}
