//C arrays- 2D arrays

/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:17/10/2024
*/


#include<stdio.h>

int main(){
	
   int marks[2][2]=
   {{70,43},
   {82,74}};
   int i,j;
   for(i=0;i<2;i++){
   	for(j=0;j<2;j++){
	   printf("Marks[%d][%d]=%d \n",i,j,marks[i][j]);
   }
      }
	    return 0; 
}
   
   

	