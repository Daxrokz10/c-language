//Q1 Print Negetaive elements of a array

#include <stdio.h>

int main(){
    int n;
    printf("Enter size of the array:- ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the array\n");

    for(int i=0;i<n;i++){
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Negative elements of the array are:- \n");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("arr[%d]= %d\n",i,arr[i]);
        }
    }

}