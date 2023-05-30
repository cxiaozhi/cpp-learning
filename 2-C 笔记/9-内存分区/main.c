#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// 宏函数
#define ADD(x, y) ((x) + (y))

struct Person
{
    char *name; // 字符串
    int age;
};

int main()
{
    int a = 10, b = 100;
    printf("a+b=%d", ADD(a, b) * 20);
    return 0;
}