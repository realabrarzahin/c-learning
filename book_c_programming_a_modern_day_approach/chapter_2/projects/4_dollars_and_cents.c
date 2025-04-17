/*
    Author: Md Abrar Zahin Antor
    Purpose: Showing amount with VAT
*/

#include<stdio.h>

int main(){

    float dollar;
    printf("Enter amount in dollar: ");
    scanf("%f",&dollar);

    float dollar_with_tax=dollar+dollar*(5.0f/100.0f);
    printf("Amount with Tax: %0.2f\n",dollar_with_tax);

    return 0;
}