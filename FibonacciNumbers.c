#include <stdio.h>
int main(){
	
	int n0=0;
	int n1=1;
	int i,n;
	int sum=0;
	printf("Enter a number?:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			printf("%d\n",i);
		}
		else if(i==1){
			printf("%d\n",i);
		}
		else{
			sum=n0+n1;
			n0=n1;
			n1=sum;
			printf("%d\n",sum);
		}
	}
}
