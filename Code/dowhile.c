#include<stdio.h>
int main(){
    int i=1,n=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do{
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }while(i<=10);
    return 0;
}
