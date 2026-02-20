#include <stdio.h>
int removeElement(int* nums,int numsSize,int val) {
	int k=0;
	for(int i=0; i<numsSize; i++) {
		if(nums[i]!=val) {
			nums[k]=nums[i];
			k++;
		}
	}
	return k;
}
int main() {
	int n,val;
	printf("Enter size: ");
	scanf("%d",&n);
	int nums[n];
	printf("Enter elements: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&nums[i]);
	}
	printf("Enter value to remove: ");
	scanf("%d",&val);
	int k=removeElement(nums,n,val);
	printf("New size: %d\n",k);
	printf("Array after removal: ");
	for(int i=0; i<k; i++) {
		printf("%d ",nums[i]);
	}
	return 0;
}
