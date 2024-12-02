#include <stdio.h>

int main(){

    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    int x = 0;
    int s= 0;

    for(i = 0; i < 9; i++){
        x=v[i+1];
        s += v[i];
        if(x%2 == 0){
            s=s+x;
        }
    }
    printf("%d %d\n" , x, s);
    return 0;
}