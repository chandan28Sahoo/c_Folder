#include<stdio.h>

/*Write a program to take two numbers A and B as input from the user and
print the number less than A which completely divides the number
For example:
A = 23, B = 7
For 23 % 7:: 21 is the number which is completely divisible by B i.e, 7.
A = 13, B = 5
For 13 % 5:: 10 is the number which is completely divisible by B i.e, 5.
*/

int main(){
    
    int a,b,c;
    printf("enter ther first number \n");
    scanf("%d",&a);
    printf("enter ther scond number \n"); 
    scanf("%d",&b); 
    c = (a % b);
    c = a - c ;
    if(c % b == 0){
        printf("%d is the number which is completely divisible by %d nmber \n",c,b);
    }else{
        printf("enter the valid number \n");
    }

    return 0;
}