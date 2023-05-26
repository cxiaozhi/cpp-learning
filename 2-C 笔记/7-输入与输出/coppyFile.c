#include <stdio.h>

void writeFileFn(FILE *sourceFile, FILE *outfp)
{
    int str;
    while ((str = fgetc(sourceFile)) != -1)
    {
        fputc(str, outfp);
    }
};

int main()
{
    FILE *fp1 = fopen("01.txt", "r");
    FILE *fp2 = fopen("02.txt", "r");
    FILE *outfp = fopen("output.txt", "w");
    writeFileFn(fp1, outfp);
    writeFileFn(fp2, outfp);
    fclose(fp1);
    fclose(fp2);
    fclose(outfp);
}