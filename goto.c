#include<stdio.h>
int main(void){
    int n=1;
    name:
    printf("%d\n",n);
    n++;
    if(n<=100000)
    goto name;
}

