#include<stdio.h>
int mySqrt(int x) {
	if(x==0)
    return 0;
	int a;
	for(a=1; a*a<=x; a++) {}
	return a-1;
}
int main() {
	int b;
	printf("Enter a number:");
	scanf("%d",&b);
	printf("Square root(rounded down)=%d\n",mySqrt(b));
	return 0;
}
