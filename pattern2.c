#include<stdio.h>
#include<stdlib.h>
int main(){
int i,j,n;
printf("enter the number\n");
scanf("%d",&n);
for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        if(j>=n-i)
            printf("*");
        else
        printf(" ");
    } 
    printf("\n");
}
for(i=n;i>0;i--){
    for(j=0;j<i;j++){
        if(j>=n-i)
            printf("*");
        else
        printf(" ");
    }
    printf("\n");
}
return 0;
}