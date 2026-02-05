// Write a C expression that calculates the square root of the sum of two numbers, rounded to the nearest integer.
// You can use math header file for this (eg: #include <math.h>)
#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    int sum;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=round(sqrt(a)+sqrt(b));
    printf("The sum is %d\n",sum);
    return 0;
}
