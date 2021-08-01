#include<stdio.h>
/*Write a program to print the product of numbers 1 to 10.
Output: 3628800*/

int product(int x);

int main(){
    int a;
    printf("Enter the number to get product of natural number \n");
    scanf("%d",&a);
    printf("the product of natural number %d is %d \n",a, product(a));
    return 0;
}

int product(int x){
    if (x == 1 || x == 0)
    {
        /* code */
        return 1;
    }
    return x * product(x - 1);
}