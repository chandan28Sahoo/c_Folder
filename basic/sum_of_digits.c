#include<stdio.h>
/*take a number N as input and print the sum of digits
of that number.*/
int main(){
    int a,b,c;
    printf("enter num for get the of digits of that number\n");
    scanf("%d",&a);
    c = a;
    while (a%10 != 0)
    {
        /* code */
        b += a % 10;
        a = a / 10;
    }
    printf("the sum of %d = %d \n", c,b);
    return 0;
}