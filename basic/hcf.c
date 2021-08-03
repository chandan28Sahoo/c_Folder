#include<stdio.h>

int hcf(int a,int b);

int main(){
    int x,y;
    // c,hcf;
    printf("Enter the first num for hcf\n");
    scanf("%d",&x);
    printf("Enter the second num for hcf\n");
    scanf("%d",&y);

    printf("hcf of %d %d is %d\n",x,y,hcf(x,y));
    return 0;
}

int hcf(int a,int b){
    if(a == 0){
        return b;
    }
    return hcf((b % a),a);
}