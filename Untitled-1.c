#include <stdio.h>
#include <stdlib.h>

typedef int Array[5]; // 定义一个包含5个整数的数组类型，名为Array

int main(void)
{
  Array a; // 声明一个Array类型的变量a
  int i;
  for (i = 0; i < 5; i++)
  {
    a[i] = i * 2; // 为a的每个元素赋值
  }

  // 打印a的所有元素值
  for (i = 0; i < 5; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}