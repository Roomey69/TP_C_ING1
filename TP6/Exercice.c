#include <stdio.h>

// FONCTIONNEL

int input(char phrase[]){
    int x;
    printf("%s",phrase);scanf("%d",&x);
    return x;
}

void init(float *a, int *b){

    *a = 0;
    *b = 0;

}

int main(){
    
    float x;
    int y;

    init(&x,&y);

    printf("%f %d", x,y);
    
    return 0;
}
