#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int main()
{
  int year, day;
  char monthname[20];
  // 必须要传地址，不然传递的只是值的副本
  scanf("%d %s %d", &year, monthname, &day);

  return 0;
}