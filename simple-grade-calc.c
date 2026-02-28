#include<stdio.h>
int main(){

int marks;
char grade;
printf("Enter your marks out of 100 = ");
scanf("%d", &marks);
if (marks < 0 || marks > 100){
    printf("Invalid Input");
    return 0;
}
else{
    grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B' : (marks >= 70) ? 'C' : (marks >= 60) ? 'D' : (marks >= 40) ? 'E' : 'F';
}
printf("\ngrade = %c", grade);
switch(grade)
{
    case 'A':
    printf("\nExcellent Work");
    break;
    case 'B':
    printf("\nWell Done");
    break;
    case 'C':
    printf("\nGood Job");
    break;
    case 'D':
    printf("\nYou passed but you can do better");
    break;
    case 'E':
    printf("\nYou barely passed so study hard next time");
    break;
    case 'F':
    printf("\nSorry, you failed");
    break;
}
if(marks >= 40){
    printf("\nCongratulations!You are eligible for next level");
}
else{
    printf("\nSorry, better luck next time");
}
    return 0;
}