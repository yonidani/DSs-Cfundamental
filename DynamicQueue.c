#include<stdio.h>
#include <stdlib.h>
void deleteFirst(){
	struct node *temp;
	if(temp==NULL)
		printf("Does not entered a data or empty Queue  ");
	else{
	head=temp;
		head=head->next;
		free(temp);
	
	    }
	}
	void insertEnd()
	{
	int data;
	printf("insert a number insert\n");
	scanf("%d",&data);
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=NULL;
	if(head==NULL)
	{
		head=link;
	} 
	else{
		struct node *link2=head;
		while(link2->next!=NULL){
			link2=link2->next;
		}
		link2->next=link;
	}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	printf("\n");
	pop();
	display();
}
