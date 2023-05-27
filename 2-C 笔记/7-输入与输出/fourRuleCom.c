#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define CALC_NUM 10
#define FILE_NAME "input.txt"
#define FILE_OUT_NAME "output.txt"
char rule[4] = {'+',
                '-',
                '*',
                '/'};
// 产生随机表达式
void createRandExpression()
{

    FILE *fp = fopen(FILE_NAME, "w");

    srand(time(NULL));
    int a = 0, b = 0;
    char c = 0, cmd[128] = "";
    for (int i = 0; i < CALC_NUM; i++)
    {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;
        c = rand() % 4;
        sprintf(cmd, "%d%c%d=\n", a, rule[c], b);
        // printf("%s", cmd);
        fputs(cmd, fp);
    }
    fclose(fp);
}

// 读取表达式
void readRuleFn()
{
    FILE *fp = fopen(FILE_NAME, "r");
    FILE *outFp = fopen(FILE_OUT_NAME, "w+");
    int a = 0, b = 0;
    char c = 0, buff[128] = "";
    char *p = NULL;
    char cmd[128] = "";
    int result;
    while (1)
    {
        p = fgets(buff, sizeof(buff), fp);
        if (p == NULL)
            break;
        // 从字符串中根据指定的格式 提取对应的值 存储到相应的变量里
        sscanf(buff, "%d%c%d=\n", &a, &c, &b);
        switch (c)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;

        default:
            break;
        }
        // 组包
        sprintf(cmd, "%d%c%d=%d\n", a, c, b, result);
        fputs(cmd, outFp);
    }
};
int main()
{

    createRandExpression();
    readRuleFn();
    return 0;
}
