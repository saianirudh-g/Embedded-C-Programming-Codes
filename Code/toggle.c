#include<stdio.h>

int setbit(int n,int k){
    return n | (1 << (k-1));
}
int clearbit(int n,int k){
    return n & (~(1 << (k-1)));
}
int togglebit(int n,int k){
    return n ^ 1 << (k-1);
}
void settingbit(int *n){
    *n |= ~0;
}
int main(void){
    int n=5,k=1;
    printf("%d with %d-th bit set: %d\n",n,k,setbit(n,k));
    printf("%d with %d-th bit clear: %d\n",n,k,clearbit(n,k));
    printf("%d with %d-th bit toggle: %d\n",n,k,togglebit(n,k));
    printf("Before setting a bit: %d\n",n);
    settingbit(&n);
    printf("After setting a bit: %d\n",n);
}
