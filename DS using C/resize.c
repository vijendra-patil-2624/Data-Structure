#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
	int *p,n,i;
	n = 3;
	p = malloc(n * sizeof(int));
	printf("enter %d elements",n);
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	int m = 5;
	int *temp;
	if(m>n){
		temp =  realloc(p, m * sizeof(int));
		
	}
	p = temp;
	printf("enter %d elements",m-n);
	for(i=3;i<m;i++){
		scanf("%d",&p[i]);
	}
	
	for(i=0;i<m;i++){
		//p = p[i];
		printf("%d %p\n",p[i],&p[i]);
	}
	free(p);
	
}
