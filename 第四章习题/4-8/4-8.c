#include <stdio.h>
int main()
{
    float score;
    int level;
    printf("请输入你百分成绩:");
    scanf("%f", &score);
    // 看学习辅导说明可以使用 While 判断，但是我还没学
    level = score / 10;
    switch (level)
    {
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("E\n");
        break;
    }
    return 0;
}