//Program to calculate electricity bill charges


/*
Author:Mugendi Denzel Gitonga
Reg No:CT101/G/24518/24
Date:8/10/2024
*/


//preprocessor directive-printf(),scanf()

#include <stdio.h>

int main(){ 
    int customerID;
    char customerName[100];
    float unitsConsumed;
	float totalBill; 

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
	printf("The customerID is %d \n",customerID);
	
    printf("Enter Customer Name: ");
    scanf(" %s", customerName); 
	printf("The customerName: is %s \n",customerName);	
		
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
 	printf("The unitsConsumed are %.2f \n",unitsConsumed);

   if (unitsConsumed<=83.4){
	   totalBill=100;
	   printf("The totalBill is %.2f \n",totalBill);}
	
   else if(unitsConsumed<=199){
	   totalBill=unitsConsumed*1.20;
	   printf("The totalBill is %.2f \n",totalBill);
   }
	
		
   else if(unitsConsumed<=399){
	   totalBill=unitsConsumed*1.50;
	   printf("The totalBill is %.2f \n",totalBill);
   } 
	
	
   else if(unitsConsumed<=599){
	   totalBill=unitsConsumed*2.07;
	   printf("The totalBill is %.2f \n",totalBill);
   }	
	
	
	
   else {
        (unitsConsumed >=600);
	   totalBill=unitsConsumed*2.30;
	   printf("The totalBill is %.2f \n",totalBill);
   }	
	
	 return 0;
}