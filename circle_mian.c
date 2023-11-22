#include <stdio.h>
#include "circle.h"
#include "circle.c"   #暂时不知道怎么解决关联这个文件的代码

int main()
{
    float result;

    result = CircleArea(2.5);
    printf("Area of circle with radius 2.5 is %.2f\n", result);

    result = CircleCircumference(3.5);
    printf("Circumference of circle with radius 3.5 is %.2f\n", result);

    return 0;
}