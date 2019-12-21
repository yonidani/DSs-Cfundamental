#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
int data;
struct node *next;
};
struct node *head = NULL;

void insertBegg(){
	int data;
	printf("insert a number to insert\n");
	scanf("%d",&data);
	struct node *link=(struct node*)malloc(sizeof(struct node));
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

void insertEnd(){
	int data;
	printf("insert a number insert\n");
	scanf("%d",&data);
	struct node *link=(struct node*)malloc(sizeof(struct node));
	link->data=data;
	link->next=NULL;
	if(head==NULL){
		head=link;
	} 
	else{
		struct node *link2=head;
		while(link2->next!=NULL){
			link2=link2->next;
		}
		link2->next=link;
	}
}

void deleteSpec(){
	int data;
	printf("insert a number delete\n");
	scanf("%d",&data);
	if(present(data)){
		struct node *link,*link2;
		if(head==NULL){
			printf("no data");
		}
		else if(head->data==data){
			link=head;
			head=head->next;
			free(link);
		}
		else{
			link=head;
			while(link->data!=data){
				link2=link;
				link=link->next;
			}
			link2->next=link->next;
			free(link);
		}		
	}
	else{
		printf("no such data\n");
	}

}
void deleteFirst(){
	struct node *temp;
	if(head==NULL)
		printf("no data");
	else{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void deleteEnd(){
	struct node *link,*link2;
	if(head==NULL)
		printf("no data");
	else{
		link=head;
		while(link->next!=NULL){
			link2=link;
			link=link->next;
		}
		link2->next=NULL;
		free(link);
	}
}
int present(d){
	struct node *link=head;
	while(link!=NULL){
		if(link->data==d){
		return 1;
		}
		link=link->next;
	}
	return 0;
}
void search(){
	int d;
	printf("insert a number search\n");
	scanf("%d",&d);
	if(present(d)){
		int f=0;
		struct node *link=head;
		while(link!=NULL){
			f++;
			if(link->data==d){
			break;
			}
			link=link->next;
		}
		if(f>=1){
			printf("data found in %d position\n",f);	
		}
		else{
			printf("data missing\n");
		}
	}
	else{
		printf("no such data\n");
	}
	
}
void display(){
	struct node *ptr=head;
	if(ptr==NULL)
	printf("no data to see");
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
int c;  
    while(1)  
    {   
        printf("\nChoose one option from the following list ...\n");  
        printf("\n1.Insert in Beginning\n2.Insert at last\n3.Delete from Beginning\n4.Delete from specfic\n5.Delete from last\n6.Search\n7.Show\n8.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&c);  
        switch(c)  
        {  
            case 1:  
            	insertBegg();
            break;  
            case 2:  
           		insertEnd(); 
            break;  
            case 3:  
            	deleteFirst();  
            break;
			case 4:
				deleteSpec();
			break;  
            case 5:  
            	deleteEnd();  
            break;  
            case 6:  
            	search();  
            break;  
            case 7:  
            	display();  
            break;  
            case 8:  
            	exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  

	}
	
}

