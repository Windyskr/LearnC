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
    printf("一次存五年%f\n", plan1);
    
}