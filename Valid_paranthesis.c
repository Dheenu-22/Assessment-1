#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isValid(char* s){
    char stack[10000];
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            stack[++top]=s[i];
        }
        else{
            if(top==-1)
                return false;
            char ch=stack[top--];
            if(s[i]==')'&&ch!='(') return false;
            if(s[i]=='}'&&ch!='{') return false;
            if(s[i]==']'&&ch!='[') return false;
        }
    }
    return top==-1;
}
int main(){
    char str[10000];
    printf("Enter brackets string: ");
    scanf("%s",str);
    if(isValid(str))
        printf("Valid\n");
    else
        printf("Invalid\n");
    return 0;
}
