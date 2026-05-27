#include<stdio.h>
#include<math.h>

int bitwiseMultiply(int a,int b){
    int result=0;
    while(b>0){
        if((b&1)!=0){
            result=result+a;
        }
        a=a<<1;
        b=b>>1;
    }
    return result;
}
int main(void){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Product of %d and %d is: %d\n",a,b,bitwiseMultiply(a,b));
}

