#include <cstdlib>
#include <stdio.h>
int main()
{
  FILE *filePoint;
  filePoint = fopen("infile.txt", "r");
  char buff[1000];
  // 读取的时候删除换行
  fgets(buff, sizeof(buff), filePoint);
  printf("buff 第一个：%s", buff);
  system("date");
  return 0;
}