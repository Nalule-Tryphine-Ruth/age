#include <stdio.h>
#include <stdlib.h>

//This program will find the average of any numbers
//using loops
//initializing
int main () {
int age[8];
int number;
char name;
int sum=0;
int average;

printf("Enter the total number of ages:");
//scanf prompts user to enter value
scanf("%d", &number);
printf("Please enter your name");
scanf("%d", &name);
//this is a loop
for(int n=0; n<number; ++n){
//requests user to enter age
    printf("Enter the %dage:", n+1);
//allows user to enter age 
    scanf("%d", &age[n]);
    sum=sum+age[n];
}
//this gets the average of the ages
average=sum/number;
printf("The average is %d", average);
   return 0;
     }

