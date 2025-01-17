#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char str2[100];

    printf("Enter the string:- ");
    gets(str);

    int len = strlen(str);
    int j = len-1;
    for(int i=0; i<=len; i++,j--){
        str2[i] = str[j];
    }
    printf("The reversed string is %s\n",str2);

    return 0;
}