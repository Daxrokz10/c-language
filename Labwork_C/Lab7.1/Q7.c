#include <stdio.h>

int main(){
    int i;
    char c,j;
    for(c='A';c<='E';c++){
        for(j=c;j>='A';j--){
            printf("%c ",j);
        }
        printf("\n");
    }
}
