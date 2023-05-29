#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int main(){
int i,j;
char s1[20],s2[20];
printf("enetr the first string of size 4\n");//indexing for size 4 will be 0 1 2 3
gets(s1);
printf("you entered:");
puts(s1);
printf("enter the second string of size 4 \n");
gets(s2);
printf("you enterd:");
puts(s2);
strcat(s1,s2);//to concatenate to strings.
printf("method 1:the result of conacatenation is:%s\n",s1);
for( i=0;s2[i]!='\0';i++){
j=strlen(s1);//j=4
  s1[i+j]=s2[i];
 
  }   
int n;
printf("enter the sum of length of both strings");
scanf("%d",&n);         //dry run s1[0+4]=s2[0] ,s1[1+4]=s2[1],s1[2+4]=s2[2],s1[3+4]=s2[3].now stop
s1[n]='\0';//4+4+1=9 excuding the null charecter
//fflush(stdin);

printf("method 2:the result of concatenation is:%s\n",s1);
return 0;
}