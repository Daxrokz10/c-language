//Q4 Sum of all elements of row or column of a matrix

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

    printf("Your array is:- \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int sum_row = 0,row_no;
    int sum_col,col_no;
    printf("Enter the row number you want to find the sum of:- ");
    scanf("%d",&row_no);

    for(int i=0;i < c;i++){
        sum_row+=arr[row_no][i];
    }
    printf("The sum of the row %d is:- %d\n",row_no,sum_row);

    printf("Enter the column number you want to find the sum of:- ");
    scanf("%d",&col_no);
    sum_col = 0;
    for(int i=0;i < r;i++){
        sum_col+=arr[i][col_no];
    }
    printf("The sum of the column %d is:- %d\n",col_no,sum_col);
    return 0;


}