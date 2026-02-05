// Write a C program to swap the values of two variables using a temporary variable.
#include <stdio.h>
int main(){
    int a,b,temp;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("The value of a before swapping is %d and b is %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The value of a after swapping is %d and b is %d\n",a,b);
    return 0;
}