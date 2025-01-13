//Q2 Check Frequency of each character in a string
//note program only works for lowercase alphabets
#include <stdio.h>

int main(){
    char str[100];

    printf("Enter the string:- ");
    scanf("%s",str);

    int count;
    char curr_alpha = 'a';
    for(curr_alpha='a';curr_alpha<='z';curr_alpha++){
        count = 0;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]==curr_alpha){
                count++;
            }
        }
        if(count>0){
            printf("The frequency of %c is %d\n",curr_alpha,count);
        }
    }
}