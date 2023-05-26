#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main()
{
  int year, mouth, day;
  scanf("%d % d %d", &year, &mouth, &day);
  printf("请输入年月日，之间用空格隔开");
  printf("%d年 %d 月%d 日", year, mouth, day);

  return 0;
}