#include<stdio.h>

void main(){
	int *arr,key,i,n;
	printf("enter the size of array :");
	scanf("%d",&n);
	
	arr = malloc(n * sizeof(int));
	printf("enter %d numbers",n);
	int found = 0;
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter value to find : ");
	scanf("%d",&key);
	
	
	for(i=0;i<n;i++){
		if(arr[i] == key){
			printf("element found at position %d",i+1);
			found = 1;
			break;
		}
	}
	
	
	if(found == 0){
		printf("there is no element is their");
	}
	free(arr);
	getch();
	
}
