#include<stdio.h>
#include<conio.h>
    
	
void printmylist(int list[],int size){
	int i;
	printf("The list before and after performing the Merge Sort Algorithem\n");
	for(i=0;i<size;i++){
		printf("%d,",list[i]);
	}
	printf("\n");
}
	
void mergesubarray(int list[],int low,int mid,int high){
	int i,j,k,B[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high){
		if(list[i]<list[j]){
			B[k]=list[i];
			i++;
			k++;
		}
		else
		{
			B[k]=list[j];
			j++;
			k++;
		}
	}
	   while(i<=mid){
	       B[k]=list[i];
	       i++;
	       k++;
	   }
	   while(j<=high){
	       B[k]=list[j];
	       j++;
	       k++;
	   }
	for(i=low;i<=high;k++){
		list[i]=B[i];
}
}
void mergesort(int list[],int low,int high){
		if(low<high){
		
		int mid=(low+high)/2;
		mergesort(list,low,mid);
		mergesort(list,mid+1,high);
		mergesubarray(list,low,mid,high);
	}
}

    int main(){
	int list[]={9,14,4,8,7,5,6};
	int size=7;
    mergesort(list,0,6);
	printmylist(list,size);
	return 0;
}

