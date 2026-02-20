#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums,int numsSize,int target,int* returnSize) {
	int i,j;
	int* result=(int*)malloc(2*sizeof(int));
	for(i=0; i<numsSize; i++) {
		for(j=i+1; j<numsSize; j++) {
			if(nums[i]+nums[j]==target) {
				result[0]=i;
				result[1]=j;
				*returnSize=2;
				return result;
			}
		}
	}
	*returnSize=0;
	return result;
}
int main() {
	int n,i,target,returnSize;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int nums[n];
	printf("Enter array elements:\n");
	for(i=0; i<n; i++) {
		scanf("%d",&nums[i]);
	}
	printf("Enter target: ");
	scanf("%d",&target);
	int* ans=twoSum(nums,n,target,&returnSize);
	if(returnSize==2)
		printf("Indices: [%d, %d]\n",ans[0],ans[1]);
	else
		printf("No pair found\n");
	return 0;
}
