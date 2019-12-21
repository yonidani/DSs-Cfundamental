#include <stdio.h>
#include <stdlib.h>

struct student{
	char id[30];
	char name[50];
	struct course{
		int creditHour;
		char courseCode[10];
		char grade[2];
		char courseName[20];
	}course[10];
};
void gradeReport(){
	struct student stud;
	struct student *stud_p;
	
	int stud_num,i,j,s;
	printf("enter the number of students:\t");
	scanf("%d",&stud_num);
	stud_p = (struct student *) malloc ( stud_num * sizeof(struct student));
	
	for(i=1;i<=stud_num;i++)
	{
		printf("enter id:\t");
		scanf("%s",stud.id);
		printf("enter student name:\t");
		scanf("%s",stud.name);
		printf("\n\nenter the number of courses taken:\t");
		scanf("%d",&s);
		int x=1;
		for(j=0;j<s;j++)
		{
			printf("enter course %d name:\t",x);
			scanf("%s",stud.course[j].courseName);
			
			printf("enter course code:\t");
			scanf("%s",stud.course[j].courseCode);
			
			printf("enter grade:\t");
			scanf("%s",stud.course[j].grade);
			
			printf("enter course credit hour:\t");
			scanf("%d",&stud.course[j].creditHour);
			printf("\n");
			x++;
		}
		
		stud_p = &stud;
		
		printf("\n\n\n\t\tMekelle university\n");
		printf("\t\tStudent grade report\n\n");
		printf("\tId: %s\n\n",stud_p->id);
		printf("\tName: %s\n\n\n",stud_p->name);
		
		printf("\tCode \t\t Grade\n");
		
		for(j=0;j<s;j++)
		{
			printf("\t%s\t\t%s\n\n",stud_p->course[j].courseCode,stud_p->course[j].grade);
		}
		
		printf("\n\t\t\tcourse matrix\n\n");
		
		printf("\tCode \t\t course name\tcredit\n\n");
		
		for(j=0;j<s;j++)
		{
			printf("\t%s\t\t%s\t\t%d\n\n\n",stud_p->course[j].courseCode,stud_p->course[j].courseName, stud_p->course[j].creditHour);
		}
	
		free(stud_p);
	}
	
}
int main(){
        gradeReport();
}
