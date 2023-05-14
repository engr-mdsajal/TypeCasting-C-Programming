//There are two types of type conversion or casting in c programming
//1. explicit type casting
//2.Implicit type casting

#include<stdio.h>
int main(){

    int num1,num2,num3;
    double avg_value;
    printf("Enter Three Numbers::");
    scanf("%d %d %d",&num1,&num2,&num3);
    avg_value=(double)(num1+num2+num3)/3;
    printf("Avg is= %.2lf",avg_value);

    return 0;

}
