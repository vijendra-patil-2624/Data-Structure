#include<stdio.h>
#include<conio.h>
void main(){
	int *p,i,n;
	printf("ener size of integer array ");
	
	scanf("%d",&n);
	p = malloc(n * sizeof(int));
	
	if(p==NULL){
		printf("memory alloction is failed");
		return 1;
	}
	
	printf("enter %d int numbers",n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	
	printf("your entered numbers is");
	for(i=0;i<n;i++){
		printf("%d  ",*(p + i));
		printf("%p  \n",&p+i);
	}
	
}
