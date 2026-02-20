#include <stdio.h>
int maxProfit(int* prices,int pricesSize) {
	int minPrice=prices[0];
	int maxProfit=0;
	for(int i=1; i<pricesSize; i++) {
		if(prices[i]<minPrice) {
			minPrice=prices[i];
		}
		else if(prices[i]-minPrice>maxProfit) {
			maxProfit=prices[i]-minPrice;
		}
	}
	return maxProfit;
}
int main() {
	int n;
	printf("Enter number of days: ");
	scanf("%d",&n);
	int prices[n];
	printf("Enter prices: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&prices[i]);
	}
	int result=maxProfit(prices,n);
	printf("Maximum Profit: %d\n",result);
	return 0;
}
