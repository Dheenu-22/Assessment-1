#include<stdio.h>
int mySqrt(int x){
    if(x==0)
        return 0;
    long alphabest=1;
    while(alphabest*alphabest<=x){
        alphabest++;
    }
    return alphabest - 1;
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Square root(rounded down)=%d\n",mySqrt(x));
    return 0;
}
