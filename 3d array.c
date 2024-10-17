//C arrays- 3D arrays

/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:17/10/2024
*/


#include<stdio.h>

int main(){
	
   int marks[2][2][3]= {
   {{70,43,12},
   {82,74,32}},
   {{34,52,49},
   {12,14,10}}};
   int i,j,k;
   for(i=0;i<2;i++){
   	for(j=0;j<2;j++){
   		for(k=0;k<3;k++)
	   printf("Marks[%d][%d][%d]=%d \n",i,j,k,marks[i][j][k]);
   }
      }
	    return 0; 
}
   
   

	