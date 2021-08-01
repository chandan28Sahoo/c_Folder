#include<stdio.h>


/*
Draw a flowchart for swapping two numbers without using the 3rd/temp
variable.
*/

int main(){
    int a,b ;
    printf("enter the 1st number for swap \n");
    scanf("%d",&a);
    printf("enter the 2nd number for swap \n");
    scanf("%d",&b);

    b = a + b;
    a = b - a;
    b = b - a;
    printf("this is your fast number %d \n", a);
    printf("this is your second number %d \n", b);

    return 0;
}