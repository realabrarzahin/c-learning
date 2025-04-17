/*
    Author: Md Abrar Zahin Antor
    Purpose: Determining the value of a polynomial;
*/

#include<stdio.h>

int main(){

    float x;
    printf("Enter the value of \"x\": ");
    scanf("%f",&x);

    float poly_value=(3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-(6);
    printf("Value: %0.2f\n",poly_value);

    float poly_value_using_horners_rule=((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("Value (Horner's Rule): %0.2f\n",poly_value_using_horners_rule);

    return 0;
}