#include <stdio.h>
#include <math.h>
int main()
{
    float money, huo, oneding, twoding, threeding, fiveding, plan1, plan2, plan3, plan4, plan5;
    money = 1000;
    huo = 0.0035;
    oneding = 0.015;
    twoding = 0.021;
    threeding = 0.0275;
    fiveding = 0.03;
    // 一次存五年
    plan1 = money * (1 + fiveding * 5);
    printf("Plan1=%f\n", plan1);
    // 先存两年期，再存三年期
    plan2 = money * (1 + twoding * 2) * (1 + threeding * 3);
    printf("Plan2=%f\n", plan2);
    // 先三，再二
    plan3 = money * (1 + threeding * 3) * (1 + twoding * 2);
    printf("Plan3=%f\n", plan3);
    // 一直一年
    plan4 = money * pow(1 + oneding, 5);
    printf("Plan4=%f\n", plan4);
    // 活期，每季度结算一次
    plan5 = money * pow(1 + huo / 4, 10);
    printf("Plan5=%f\n", plan5);
    return 0;
}