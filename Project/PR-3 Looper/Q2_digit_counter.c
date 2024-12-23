#include <stdio.h>

int main(){
    int i,num,count;
    count = 0;
    printf("Enter a number: ");
    scanf("%d",&num);

    do{
        num /= 10;  //remove digits of a number one by one until the number becomes 0 and also increase the count
        count++;
    }while(num!=0);

    printf("Number of digits in the number is : %d",count);

}