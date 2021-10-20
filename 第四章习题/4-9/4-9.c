#include <stdio.h>
int main()
{
    int number, weishu;
    printf("请输入一个不多于5位的正整数：");
    scanf("%d", &number);
    // Task 1 求出它是几位数
    if (number < 10)
    {
        printf("这是一个一位数\n");
        weishu = 1;
    }
    else if (number < 100)
    {
        printf("这是一个两位数\n");
        weishu = 2;
    }
    else if (number < 1000)
    {
        printf("这是一个三位数\n");
        weishu = 3;
    }
    else if (number < 10000)
    {
        printf("这是一个四位数\n");
        weishu = 4;
    }
    else
    {
        printf("这是一个五位数\n");
        weishu = 5;
    }
    // Task 2 分别输出每一位数字
    int wan, qian, shi, bai, ge;
    if (weishu > 4)
    {
        wan = number / 10000 % 10;
        printf("万位是%d\n",wan);
    }
    if (weishu > 3)
    {
        qian = number / 1000 % 10;
        printf("千位是%d\n",qian);
    }
    if (weishu > 2)
    {
        bai = number / 100 % 10;
        printf("百位是%d\n", bai);
    }
    if (weishu > 1)
    {
        shi = number / 10 % 10;
        printf("十位是%d\n", shi);
    }
    ge = number % 10;
    printf("个位是%d\n", ge);
    // Task 3 逆序输出
    // printf("%d%d%d%d%d\n", ge, shi, bai, qian, wan);
    switch (weishu)
    {
    case 5:
        printf("%d%d%d%d%d\n", ge, shi, bai, qian, wan);
        break;
    case 4:
        printf("%d%d%d%d\n", ge, shi, bai, qian);
        break;
    case 3:
        printf("%d%d%d\n", ge, shi, bai);
        break;
    case 2:
        printf("%d%d\n", ge, shi);
        break;
    default:
        printf("%d\n", ge);
        break;
    }
    return 0;
}