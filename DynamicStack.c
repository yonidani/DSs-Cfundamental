#include<stdio.h>
#include <stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *head=NULL;

void insertBegg(int data){
	struct stack *link=(struct stack*)malloc(sizeof(struct stack));
	link->data=data;
	link->next=NULL;
	if(head==NULL){
		head=link;
	}
	else{
		link->next=head;
		head=link;
	}
}

void deleteBegg(){
	struct stack *temp;
	if(head==NULL)
		printf("no data");
	else{
		temp=head;
		head=head->next;
		free(temp);
	}
}

void display(){
	struct stack *ptr=head;
	if(ptr==NULL)
	printf("no data to see");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int main(){
	int i,j,k;
	printf("enter no of items\n");
	scanf("%d",&i);
	for(j=0;j<i;j++){
		scanf("%d",&k);
		insertBegg(k);
		display();
	}
	deleteBegg();
	printf("after the deletion of the first item:\n");
	display();
}
