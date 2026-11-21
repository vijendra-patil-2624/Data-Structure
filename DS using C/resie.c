#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	
	int *arr;
	int n = 3,i;
	arr = malloc(n * sizeof(int));
	
	for(i=0;i<n;i++){
		arr[i] = (i + 1) * 10; 
	}
	
	int *temp;
	int newsize = 5;
	temp = realloc(arr, newsize * sizeof(int));
	
	if(temp == NULL){
		free(arr);
		return 1;
	}
	
	arr = temp;
	for(i=3;i<newsize;i++){
		arr[i] = (i + 1) * 10;
		
	}
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
}
