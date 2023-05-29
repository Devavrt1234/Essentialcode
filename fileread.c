#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	char ch;
	
	printf("\nEnter file name:");
	fp=fopen("source.txt","r");
	if(fp==NULL)
	{
	 puts("Unstable to open the file.");
	 exit(0);
	}
	else
	printf("%c",ch);
	fclose(fp);
	return 0;
}