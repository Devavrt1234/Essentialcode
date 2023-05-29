 #include<stdio.h>
 #include <string.h>
 #include<stdlib.h>
 
  char stringconcatenate(char *s1,char* s2)
{       int i,j;
	 for( i=0;s2[i]!='\0';i++){
j=strlen(s1);//j=4
  s1[i+j]=s2[i];
     }
  int l=strlen(s2);    
  if(i==l){    //dry run s1[0+4]=s2[0] ,s1[1+4]=s2[1],s1[2+4]=s2[2],s1[3+4]=s2[3].now stop
s1[i]='\0';
  }
    stringconcatenate(s1,s2);
    return s1;
}
int main()
{
    char s1[1000],s2[1000];  
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
   int result=stringconcatenate(s1,s2);
    
	printf("combined two strings ='%s'\n",result);
 
    return 0;
}