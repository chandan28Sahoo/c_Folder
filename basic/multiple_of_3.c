#include<stdio.h>

/*Write a program that takes a number n and checks if the number is an
odd multiple of 3*/
int main(){
    int a;

    printf("enter the number to check the number is an odd multiple 3 \n");
    scanf("%d",&a);
    if(a % 2 != 0){
        if(a % 3 == 0){
            printf("the number is an odd and multiple  of 3");
        }else{
            printf("the number is not multiple  of 3");
        }
    }else{
        printf("the number is even \n");
    }
    return 0;
}