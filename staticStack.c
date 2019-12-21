#include <stdio.h>

int MAXSIZE = 100;
int stack[100];
int top = -1;

void push(int data){
	if(top == MAXSIZE){
		printf("Stack is full.\n");
	}
	else{
		top = top + 1;
		stack[top] =data;
	}
}

void pop(){
	if(top == -1) {
		printf("Stack is empty.\n");
	}
	else {
		int data = stack[top];
		top = top - 1;
	}
}

void display(){
	int i;
	if(top==-1){
		printf("stack is empty");
	}
	else{
		for(i=0;i<=top;i++){
			printf("%d\t",stack[i]);
		}
		printf("\n");
	}
}
void peek() {
	printf("the top value is :%d",stack[top]);
}
int main(){
	int i,j,k;
	printf("enter no of items\n");
	scanf("%d",&i);
	for(j=0;j<i;j++){
		scanf("%d",&k);
		push(k);
		display();
	}
	pop();
	display();
	peek();
}
