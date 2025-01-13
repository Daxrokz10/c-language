//Q1 Check wether a string is a pallindrome or not without using string functions

#include <stdio.h>

void pallindrome(char str[]){
    int i=0;
    int j=0;
    while(str[j]!='\0'){
        j++;
    }
    j--;
    while(i<j){
        if(str[i]!=str[j]){
            printf("The string is not a pallindrome\n");
            return;
        }
        i++;
        j--;
    }
    printf("The string is a pallindrome\n");
}
int main(){
    char str[100];
    printf("Enter the string:- ");
    scanf("%s",str);
    pallindrome(str);
    return 0;
}
