//Q3 Transpose Array

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

    printf("The original array is:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of the array is:- \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}