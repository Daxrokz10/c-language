#include <stdio.h>

int main(){
    int i,j,n;
    printf("Enter the value for pyramid: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}