#include<stdio.h>

void resettingbit(int *n){
    *n = 0;
}
int main(void){
    int n=10;
    resettingbit(&n);
    printf("Resetting a bit: %d\n",n);
}
