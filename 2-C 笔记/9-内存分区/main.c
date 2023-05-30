#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Person
{
    char name; // 字符串
    int age;   // 这个内存存放的地址原则一 距离得是基数的整数倍（它本身占用大小与对齐模数的比较 取小的）这里取4，它又是第二个属性，只能从4开始
    // 最后还要整体二次偏移 取最大的基数 的整数倍
};

int main()
{

    printf("内存大小：%d\n", sizeof(struct Person));
    return 0;
}