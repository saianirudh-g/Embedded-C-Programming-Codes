#include <stdio.h>
#define n 100

int main(void){
    int num,i;
    printf("Enter a number: \n");
    scanf("%d",&num);
    for(int i=1;i<=n;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}

