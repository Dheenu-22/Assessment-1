#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(int n) {
	if(n<=0)
		return false;
	return(n&(n-1))==0;
}
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(isPowerOfTwo(n))
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
