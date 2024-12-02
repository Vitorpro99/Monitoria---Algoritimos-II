#include <stdio.h>

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = i; j <= i + 4; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}