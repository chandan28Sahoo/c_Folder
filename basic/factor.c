#include<stdio.h>
#include <math.h>
/*take input a number, print all of its factors.*/
int main(){
    int a,i;
    double s;
    printf("Enter num for get factor \n");
    scanf("%d",&a);
    s = sqrt(a);
    for (i=1; i<=(int)s; i++){
        if(a % i == 0){
            printf("%d %d\n",i,a/i);
        }
    }
    return 0;
}