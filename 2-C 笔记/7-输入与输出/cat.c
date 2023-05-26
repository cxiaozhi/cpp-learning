#include <stdio.h>

// 传入两个文件
void filecopy(FILE *ifp, FILE *ofp)
{
  int str;
  while ((str = fgetc(ifp)) != EOF)
  {
    fputc(str, ofp);
  }
}
int main(int argc, char *argv[])
{
  printf("输入的参数个数有：%d个\n", argc);
  printf("第1个参数是：%s\n", argv[0]);
  printf("第2个参数是：%s\n", argv[1]);
  printf("第3个参数是：%s\n", argv[2]);
  FILE *fp;
  if (argc == 1)
  {
    filecopy(stdin, stdout);
  }
  else
  {
    while (--argc > 0)
    {
      // 循环遍历传入的文件
      if ((fp = fopen(*++argv, "r")) == NULL)
      {
        printf("cat: can't open %s\n", *argv);
        return 1;
      }
      else
      {
        filecopy(fp, stdout);
        fclose(fp);
      }
    }
  }
}