#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int compare(const void*a,const void*b) {
	int x=*(int*)a;
	int y=*(int*)b;
	if(x>y)return 1;
	if(x<y)return -1;
	return 0;
}
bool containsDuplicate(int*nums,int numsSize) {
	if(numsSize<=1)return false;
	qsort(nums,numsSize,sizeof(int),compare);
	for(int i=0; i<numsSize-1; i++) {
		if(nums[i]==nums[i+1])return true;
	}
	return false;
}
int main() {
	int n,i;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int nums[n];
	printf("Enter elements:\n");
	for(i=0; i<n; i++) {
		scanf("%d",&nums[i]);
	}
	if(containsDuplicate(nums,n))
		printf("Duplicate found\n");
	else
		printf("No duplicate\n");
	return 0;
}
