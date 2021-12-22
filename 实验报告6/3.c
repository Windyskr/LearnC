/* （3）设有6位职工，职工信息的包括：职工号、姓名、性别、身份证号、工资，
计算并输出所有职工工资的平均值和最高工资的职工。*/
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
