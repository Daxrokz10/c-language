//         5    
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5
        
#include <stdio.h>

int main(){
    int i,j,s;

    for(i=5;i>=1;i--){
        for(s=1;s<=i;s++){
            printf("  ");
        }
        for(j=5;j>=i;j--){
            
            printf("%d ",j);
        }
        printf("\n");
    }
}
