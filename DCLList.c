#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head=NULL;
struct node *tail=NULL;

void insertBegg(){
	int data;
	printf("insert a number to insert\n");
	scanf("%d",&data);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=temp;
	temp->prev=temp;
	if(head==NULL){
		head=temp;
	}
	else{
		struct node *temp2=head;
		while(temp2->next!=head){
			temp2=temp2->next;
		}
		temp->next=head;
		temp->prev=temp2;
		head->prev=temp;
		head=temp;
		temp2->next=temp;
	}	
}

void insertsp(){
	int data,pos;
	printf("insert a position to insert\n");
	scanf("%d",&pos);
	printf("insert a number to insert\n");
	scanf("%d",&data);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	int y=1;
	temp->data=data;
	temp->next=temp;
	temp->prev=temp;
	if(head==NULL){
		head=temp;
	}
	else{
		struct node *temp2=head,*temp3;
		while((temp2->next!=head)&&(y!=pos)){
			temp2=temp2->next;
			y++;
		}
	
		temp2->next->prev=temp;
		temp->prev=temp2;
		temp->next=temp2->next;
		temp2->next=temp;
		
	}
}


void insertEnd(){
	int data;
	printf("insert a number to insert\n");
	scanf("%d",&data);
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=temp;
	temp->prev=temp;
	if(head==NULL){
		head=temp;
	}
	else{
		struct node *temp2=head;
		while(temp2->next!=head){
			temp2=temp2->next;
		}
		temp->next=head;
		temp->prev=temp2;
		temp2->next=temp;
		head->prev=temp;
	}
}

void deleteBegg(){
	if(head==NULL){
		printf("no data to delete");
	}
	else if(head->next==head){
		head=NULL;
		free(head);
	}
	else{
		struct node *temp2=head;
		while(temp2->next!=head){
			temp2=temp2->next;
		}
		head=head->next;
		temp2->next=head;
		head->prev=temp2;
	}
}

int present(d){
	struct node *link=head;
	while(link->next!=head){
		if(link->data==d){
		return 1;
		}
		link=link->next;
	}
	return 0;
}
void search(){
	int data;
	printf("insert a number search\n");
	scanf("%d",&data);
	struct node *temp2=head;
	int y=1;
	while(temp2->data!=data){
		if(temp2->next==head){
			y=0;
			break;
		}
		temp2=temp2->next;
		y++;
	}
	if(y==1){
		printf("Data Not found\n");
	}
	else{
		printf("Data found at : %d\n\n",y);
	}
	
}

void deleteSpec(){
	int data;
	printf("insert a number to insert\n");
	scanf("%d",&data);
	if(present(data)){
		if(head==NULL){
			printf("no data to delete");
		}
		else if(head->data==data){
		deleteBegg();
		}
		else{
			struct node *temp2=head,*temp3;
			while(temp2->data!=data){
				temp3=temp2;
				temp2=temp2->next;
			}
			temp3->next=temp2->next;
			temp2->prev=temp3;
		}		
	}
	else{
			printf("no data to delete");		
	}
 
}

void deleteEnd(){
	if(head==NULL){
		printf("no data to delete");
	}
	else if(head->next==head){
		head=NULL;
		free(head);
	}
	else{
		struct node *temp2=head,*temp3;
		while(temp2->next!=head){
			
			temp3=temp2;
			temp2=temp2->next;
		}
		head->prev=temp3;
		temp3->next=head;
	} 
}
void display(){
	struct node *ptr=head;
	if(head==NULL)
	printf("no data");
	else{
		while(ptr->next!=head){
			printf("%d\n",ptr->data);
			ptr=ptr->next;	
		}
		if(ptr->next==head){
			printf("%d\t",ptr->data);
		}		
	}
}

int main(){
int c=0;  
    while(1)  
    {   
        printf("\nChoose one option from the following list ...\n");  
        printf("\n1.Insert in Beginning\n2.Insert at specfic\n3.Insert at last\n4.Delete from Beginning\n5.Delete from specfic\n6.Delete from last\n7.Search\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice?\n");  
        scanf("\n%d",&c);  
        switch(c)  
        {  
            case 1:  
            	insertBegg();
            break;  
            case 2:
            	insertsp();
            break;
            case 3:  
           		insertEnd(); 
            break;  
            case 4:  
            	deleteBegg();  
            break;
			case 5:
				deleteSpec();
			break;  
            case 6:  
            	deleteEnd();  
            break;  
            case 7:  
            	search();  
            break;  
            case 8:  
            	display();  
            break;  
            case 9:  
            	exit(0);  
            break;  
            default:  
            printf("Please enter valid choice..");  
        }  

	}
}
