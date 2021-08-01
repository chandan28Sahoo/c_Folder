#include<stdio.h>

/*
Write a program to take a number as input from the user and print
a. “Bingo” - If the number is even and >200
b. “Ringo” - If the number is odd and <200
c. “CodeChef” - for any other number
Note: You cannot use and/or operator
*/

int main(){
    int a;
    printf("this is the game of bingo/ringo/codechef\n");
    printf("enter the number to check bingo / ringo /codechef \n");
    scanf("%d",&a);
    if(a % 2 == 0){
        if(a > 200){
            printf("Bingo");
        }else{
            printf("Codechef");
        }
    }else{
        if(a < 200){
            printf("Ringo");
        }else{
            printf("Codechef");
        }
    }
    return 0;
}