#include<stdio.h>
/*Write a program to print the numbers from 1 to 20 in reverse order.
■ Output:
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1*/
int main(){
    int a;
    printf("Enter a to print reverse \n");
    scanf("%d",&a);

    while (a >= 1)
    {
        /* code */
        printf("The reverse number is %d \n",a);
        a--;
    }
    
    return 0;
}