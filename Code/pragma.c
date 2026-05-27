#include <stdio.h>

void func();//function
void func1();//first function
void func2();//second function

void __attribute__((constructor)) func1();
void __attribute__((destructor)) func2();

#pragma startup func1
#pragma exit func2

void func(){
    printf("Iam in function \n");
}
void func1(){
    printf("Iam in first function \n");
}
void func2(){
    printf("Iam in second function \n");
}
void main(){
    func();
    printf("Iam in main function \n");
}

