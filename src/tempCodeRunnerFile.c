#include <stdio.h>
#include <math.h>
int main(){
    int num;
    int result;
    printf("Enter a number:");
    scanf("%d",&num);
    result=(sqrt(num)*sqrt(num)==num);
    printf("The result is %d\n",result);
    return 0;
}