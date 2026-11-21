#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int id;
	char title[20];
	float price;
}Book; 

void main(){
	Book *books;
	int n,i;
	printf("Enter numberof books:");
	scanf("%d",&n);
	
	books = (Book *)malloc(n * sizeof(Book));
	
	if(books == NULL){
		printf("memory allocation is failed");
	}
	
	for(i=0;i<n;i++){
		printf("Enter book details of %d\n",i+1);
		
		printf("Enter bookID:");
		scanf("%d",&(books + i)->id);
		printf("Enter title:");
		scanf("%s",&(books + i)->title);
		printf("Enter price:");
		scanf("%f",&(books + i)->price);
		printf("\n");
	}
	int maxindex=0;
	for(i=1;i<5;i++){
		
		if((books + i)->price > (books + maxindex) -> price){
			maxindex = i;
		}
	}
	
	printf("----most expensive book ----\n");
	printf("Book ID %d\n",(books + maxindex)->id);
	printf("Book Name %s\n",(books + maxindex)->title);
	printf("Book price %.2f",(books + maxindex)->price);
	
	free(books);
}
