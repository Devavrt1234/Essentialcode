#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,n;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
   if(j<=i)
    printf("*");
    else
    printf(" ");
   if(j>=i)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
}
return 0;
}