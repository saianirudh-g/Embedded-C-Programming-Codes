#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d%d",&num1,&num2);
    int a = num1 + num2;
    int b = num1 - num2;
    int c = num1 * num2;
    float d = num1 / num2;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%f\n",d);
}
