#include<stdio.h>
#include<stdlib.h>
struct students{
	int id;
	char name[20];
	int marks;
};
void main(){
	int n,i;
	printf("enter number of students");
	scanf("%d",&n);
	
	struct students *s = malloc(n *sizeof(struct students));
	
	if(s == NULL){
		printf("memory allocation is failed");
		return 1;
	}
	for(i=0;i<n;i++){
		printf("enter details of student %d\n",i+1);
		
		printf("enter ID:");
		scanf("%d",&s[i].id);
		printf("enter Name:");
		scanf("%s",&s[i].name);
		printf("enter Marks:");
		scanf("%d",&s[i].marks);
		printf("\n");
	}
	
	int searchid;
	int found = 0;
	printf("enter studentID to find : ");
	scanf("%d",&searchid);
	
	for(i=0;i<n;i++){
		if(s[i].id == searchid){
			printf("student found\n");
			printf("student id %d\n",s[i].id);
			printf("student name %s\n",s[i].name);
			printf("student marks %d\n",s[i].marks);
		
		if(s[i].marks>=80){
			printf("Distinction");
			
		}
		else if(s[i].marks>=70){
			printf("first class");
			
		}
		else if(s[i].marks>=60){
			printf("second class");
		}
		else if(s[i].marks>=50){
			printf("Third class");
		}
		else{
			printf("Fail");
		}
		found =1;
		break;
	}
	}
	if(found == 0 ){
		printf("please enter valid student ID");
	}
	
}
