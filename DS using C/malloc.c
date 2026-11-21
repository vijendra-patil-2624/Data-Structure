#include<stdio.h>
#include<stdlib.h>
void main(){
	int *p;
	int n = 5,i;
	
	p = malloc(n* sizeof(int));
	 
	if(p==NULL){
		printf("memory allocation is failed ");
		return 1;
	}
	
	for(i=0;i<n;i++){
		p[i]= (i + 1) * 10;
	}
	
	for (i=0;i<n;i++){
		printf("%d ",p[i]);
	}
	
	free(p);
	getch();
}
