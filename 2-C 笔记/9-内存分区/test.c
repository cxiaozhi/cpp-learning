#include <stdint.h>
#include <stdio.h>
char f(char a, char b)
{
    int count = 1;
    while (a + b > 0)
    {

        a = a + 1;
        b = b - 1;
        printf("第%d次打印: \n", count);
        printf("a的值: %d\n", a);
        printf("b的值: %d\n", b);
        printf("a + b的值: %d\n", (a + b));
        count++;
        if (count == 200)
        {
            break;
        }
    }
    return a + b;
}
int main()
{
    char res = f(1, 0);
    return 0;
}