/*
    Author: Md Abrar Zahin Antor
    Purpose: Determining how much small amount needed to generate the effect same as the whole dollar. 
*/

#include<stdio.h>

#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main(){

    int dollar;
    printf("Enter whole amount: ");
    scanf("%d",&dollar);

    int twenties=dollar/TWENTY;
    dollar=dollar-twenties*TWENTY;

    int tens=dollar/TEN;
    dollar=dollar-tens*TEN;

    int fives=dollar/FIVE;
    dollar=dollar-fives*FIVE;

    int ones=dollar/ONE;
    dollar=dollar-ones*ONE;

    printf("$20 bills: %d\n",twenties);
    printf("$10 bills: %d\n",tens);
    printf("$5 bills: %d\n",fives);
    printf("$1 bills: %d\n",ones);

    return 0;
}
