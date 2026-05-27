#include <stdio.h>

int c;
void autostorageclass(){
    printf("auto storage class ");
    auto int a = 5;
    printf("%d\n",a);
}
void registerstorageclass(){
    printf("register storage class ");
    register char b = 'S';
    printf("%d\n",b);
}
void externstorageclass(){
    printf("extern storage class ");
    extern int c;
    printf("%d\n",c);
    c=2;
    printf("%d\n",c);
}
void staticstorageclass(){
    printf("static storage class ");
    for(int i=0,i<5;i++){
        static int d = 10;
        int e = 20;
        d++;
        e++;
        printf("%d%d\n",i,d);
        printf("%d%d\n",i,e);
    }
}

int main(){
    printf("Program is demonstrated ");
    autostorageclass(); 
    registerstorageclass();
    externstorageclass();
    staticstorageclass();
    return 0;
}
