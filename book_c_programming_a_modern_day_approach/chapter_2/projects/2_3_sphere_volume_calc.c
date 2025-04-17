/*
    Author: Md Abrar Zahin Antor
    Purpose: Determining the volume of a sphere.
*/

#include <stdio.h>

#define PI 3.14

int main(){
    
    float radius;
    printf("Radius: ");
    scanf("%f",&radius);

    float volume = (4.0f/3.0f)*(PI*radius*radius*radius);

    // printf("When Radius: %d the Volume: %d\n",radius,volume);
    // Above comment shows the possible classic bug I can produce in a C program.

    printf("When Radius: %0.2f the Volume: %0.2f\n",radius,volume);
    
    return 0;
}