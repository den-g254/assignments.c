//program to find square of numerics


/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:17/10/2024
*/



#include <stdio.h>
int main (){
	int start,stop;
	int square;
   
  
    printf("enter start:");
    scanf("%d",&start);
    
     printf("enter stop:");
    scanf("%d",&stop);

   int i;
   for(i=start;i<stop;i++){
   	square=i*i;
	   printf("%d \n",square);
   }
   
   return 0;
   }
 
  