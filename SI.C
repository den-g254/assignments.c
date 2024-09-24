//Program to calculate simple interest;

/*
Program to calculate simple interest
Author: Mugendi Denzel
Reg no.: CT101/G/24518/24
Date: 23/9/2006
*/

//Preprocessor directive-scanf(),printf()

#include <stdio.h>
int main(){
	int principal ='p'//%d
	;float time ='t';//%f
	float rate ='r';//%f
    float simpleInterest = 'SI';//%f

    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf(" The principal is \t %d \n",principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);
    printf(" The time is \t %.1f \n",time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("The rate is \t %.2f \n",rate);
    
    simpleInterest = (principal * time * rate) / 100;

    
    printf("The simple interest is: %.2f\n", simpleInterest);

    return 0;
}
