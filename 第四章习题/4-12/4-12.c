#include <stdio.h>
#include <math.h>
int main()
{
    float ix, iy, rx, ry, distance;
    printf("请输入坐标(x,y):");
    scanf("(%f,%f)", &ix, &iy);
    rx = fabsf(ix);
    ry = fabsf(iy);
    distance = sqrt(pow(rx - 2, 2) + pow(ry - 2, 2));
    if (distance < 1)
    {
        printf("建筑高度为10。n");
    }
    else
    {
        printf("建筑高度为零。\n");
    }
    return 0;
}