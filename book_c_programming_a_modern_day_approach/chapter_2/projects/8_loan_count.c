/*
    Author: Md Abrar Zahin Antor
    Purpose: Counting remaining loan after 3rd payments.
*/

/*
    Write a program that calculates the remaining balance on a loan after 
    the first, second, and third monthly payments: Enter amount of loan: 
    20000.00 Enter interest rate: 6.0 Enter monthly payment: 386.66 Balance
    remaining after first payment: $19713.34 Balance remaining after 
    second payment: $19425.25 Balance remaining after third payment: $19135.71
*/

#include<stdio.h>

int main(){
    
    float loan;
    printf("Enter amount of Loan: ");
    scanf("%f",&loan);

    float interest_rate_yearly;
    printf("Enter interest rate: ");
    scanf("%f",&interest_rate_yearly);

    float monthly_income;
    printf("Enter monthly income: ");
    scanf("%f",&monthly_income);
    
    float interest_rate=interest_rate_yearly/12.0f;
    float loan_first_month = loan+loan*(interest_rate/100.0f);
    loan_first_month=loan_first_month-monthly_income;
    printf("Balance remaining after first payment: %0.2f\n",loan_first_month);

    float loan_second_month=loan_first_month+loan_first_month*(interest_rate/100.0f);
    loan_second_month=loan_second_month-monthly_income;
    printf("Balance remaining after second payment: %0.2f\n",loan_second_month);

    float loan_third_month=loan_second_month+loan_second_month*(interest_rate/100.0f);
    loan_third_month=loan_third_month-monthly_income;
    printf("Balance remaining after third payment: %0.2f\n",loan_third_month);

    return 0;
}