#include<stdio.h>
#include <math.h>

int main(){
    int a,i,flag;
    double s;
    printf("Enter number to check prime or not\n");
    scanf("%d",&a);
    s = sqrt(a);
    for (i=2; i<=(int)s; i++){
        if(a % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("prime number\n");
    }else{
        printf("not prime number\n");
    }
    return 0;
}