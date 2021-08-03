#include<stdio.h>


int main(){
    int b,a,c,hcf;
    printf("Enter the first num for hcf\n");
    scanf("%d",&a);
    printf("Enter the second num for hcf\n");
    scanf("%d",&b);

    if(a<b){
        c = a;
    }else{
        c = b;
    }
    int i = 1 ;
    while (i <= c)
    {
        /* code */
        if(a % i == 0 && b % i == 0){
            hcf = i;
            i++;
        }else{
            i++;
        }
    }
    printf("hcf of %d %d is %d\n",a,b,hcf);
    return 0;
}
