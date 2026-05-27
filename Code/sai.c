#include <stdio.h>

int add(int num1,int num2){
    int a = num1+num2;
    printf("%d\n",a);
}
int sub(int num1,int num2){
    int a = num1 - num2;
    printf("%d\n",a);
}
int mul(int num1,int num2){
    int a = num1 * num2;
    printf("%d\n",a);
}
int div(int num1,int num2){
    double a = num1 / num2;
    printf("%lf\n",a);
}
int main(){
    add(2,3);
    sub(3,2);
    mul(3,2);
    div(3,2);
}
