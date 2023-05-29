#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    FILE *fp,*ft;

    char ch = 'a';
    
    int a = 10;
    char s[50];
    char s1[51];
    if (fp == NULL)
    {
        printf("file doesn't exist\n");
        exit(1);
    }
    fp = fopen("myfile.txt", "w");
     ft=fopen("myfile.txt","w");
    printf("enter the string\n");
    gets(s);
    fputs(s, fp);
    fprintf(fp, "\n%c\n%d\n %s\n", ch, a, s);
    // ALTERNATIVE OF fputs(string name,file pointer name) function
    for (int i = 0; i != strlen(s); i++)
    {
        fputc(s[i], fp); // fputc('character formate'or varible name for character,file pointer name)
    }
    
    fclose(fp);
    return 0;
}