#include<stdio.h>
int maxSubArray(int* nums,int numsSize) {
	int a=nums[0];
	int b=nums[0];
	int i;
	for(i=1; i<numsSize; i++) {
		if(b<0)
			b=nums[i];
		else
			b=b+nums[i];
		if(b>a)
			a=b;
	}
	return a;
}
int main() {
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int nums[n];
	printf("Enter the elements:\n");
	for(i=0; i<n; i++) {
		scanf("%d",&nums[i]);
	}
	int result=maxSubArray(nums,n);
	printf("Maximum Subarray Sum = %d\n",result);
	return 0;
}
