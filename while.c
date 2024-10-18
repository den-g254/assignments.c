//while loop program

/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:17/10/2024
*/

#include <stdio.h>
int main (){
	int start,stop;
   
  
    printf("enter start:");
    scanf("%d",&start);
    
     printf("enter stop:");
    scanf("%d",&stop);
    
     int i=start;
 
  while(i<=stop){
  
    printf("%d\n",i);
	  i++;
}
 
 return 0; 
}