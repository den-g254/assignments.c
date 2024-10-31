//marks of 5 students

/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:30/10/2024
*/


#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct student
{
	char name[20];
	int marks;
}student1,student2,student3,student4,student5;

int main(){
	
	 
   FILE*fptr;
   fptr =fopen("C:\\Users\\ASC\\Documents\\Projects\\sample.txt","w");
	
	strcpy(student1.name, "Brenan Johnson");
	student1.marks = 70;
	
	strcpy(student2.name, "Cole Palmer");
	student2.marks =98;
	
    strcpy(student3.name, "Lamine Yamal");
	student3.marks = 77;
	
    strcpy(student4.name, "Mason Mount");
	student4.marks = 38;
	
    strcpy(student5.name, "Phil Foden");
	student5.marks = 89;
	

    fprintf(fptr,"%s\n", student1.name);
	fprintf(fptr,"%d\n\n", student1.marks);
	
    fprintf(fptr,"%s\n", student2.name);
	fprintf(fptr,"%d\n\n", student2.marks);
	
    fprintf(fptr,"%s\n", student3.name);
	fprintf(fptr,"%d\n\n", student3.marks);
	
    fprintf(fptr,"%s\n", student4.name);
	fprintf(fptr,"%d\n\n", student4.marks);
	
    fprintf(fptr,"%s\n", student5.name);
	fprintf(fptr,"%d\n\n", student5.marks);
	
	fclose(fptr);

	
	return 0;
}