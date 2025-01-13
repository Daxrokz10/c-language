#include <stdio.h>

int main(){
    int r,c;
    printf("Enter the number of rows:- ");
    scanf("%d",&r);
    printf("Enter the number of columns:- ");
    scanf("%d",&c);
    int arr[r][c];


    printf("Enter the elements of the array\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int arrmax = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>arrmax){
                arrmax = arr[i][j];
            }
        }
    }
    printf("The maximum element of the array is:- %d",arrmax);
}