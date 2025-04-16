/*
    Author: Md Abrar Zahin Antor
    Purpose: Dimensional Weight calculator
*/

#include<stdio.h>

#define POUND_PER_INCHES 166

int main(void){

    int length;
    printf("Length: ");
    scanf("%d",&length);

    int width;
    printf("Width: ");
    scanf("%d",&width);

    int height;
    printf("Height: ");
    scanf("%d",&height);    

    int volume=height*width*length;
    printf("Volume: %d\n",volume);

    printf("Dimensional Weight: %d",(volume+POUND_PER_INCHES-1)/POUND_PER_INCHES);

    return 0;
}