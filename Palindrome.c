#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x){
    if(x<0||(x%10==0&&x!=0))
        return false;
    int rev=0;
    while(x>rev){
        rev=rev*10+x%10;
        x/=10;
    }
    return(x==rev||x==rev/10);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
