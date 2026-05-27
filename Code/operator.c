#include<stdio.h>
#include <stdbool.h>

void arithematic(int a,int b){
    int c = a + b;
    int d = a - b;
    int e = a * b;
    float f = a / b;
    int g = a % b;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%f\n",f);
    printf("%d\n",g);
}
void relational(int a,int b){
    if(a==b){
        printf("equal\n");
    }
    else if (a>b){
        printf("a is greater than b\n");
    }
    else if(a<b){
        printf("a is lesser than b\n");
    }
}
void logical(int a,int b){
    if(a==b && b==a){
        printf("Equals\n");
    }else {
        printf("Not Equals\n");
    }
}
void boolean(int a,int b){
    if(a==b){
        printf("True\n");
    }else{
        printf("false\n");
    }
}
int main(void){
    arithematic(2,3);
    relational(2,3);
    logical(2,3);
    boolean(2,3);
}

