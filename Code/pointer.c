#include<stdio.h>

int main(void){
    int x = 5;
    float y = 4.5;
    double z = 3.14;

    int* intptr = &x;
    float* floatptr = &y;
    double* doubleptr = &z;

    int* intcastedptr = (int*)intptr;
    int* floatcastedptr = (int*)floatptr;
    int* doublecastedptr = (int*)doubleptr;

    float* intcastedptr1 = (float*)intptr;
    float* floatcastedptr1 = (float*)floatptr;
    float* doublecastedptr1 = (float*)doubleptr;

    double* intcastedptr2 = (double*)intptr;
    double* floatcastedptr2 = (double*)floatptr;
    double* doublecastedptr2 = (double*)doubleptr;

    printf("Value of x: %d\n",*intptr);
    printf("Value of y: %f\n",*floatptr);
    printf("Value of z: %lf\n",*doubleptr);

    printf("Value of x as int: %d\n",*intcastedptr);
    printf("Value of y as int: %d\n",*floatcastedptr);
    printf("Value of z as int: %d\n",*doublecastedptr);

    printf("Value of x as float: %f\n",*intcastedptr1);
    printf("Value of y as float: %f\n",*floatcastedptr1);
    printf("Value of z as float: %f\n",*doublecastedptr1);
    
    printf("Value of x as double: %lf\n",*intcastedptr2);
    printf("Value of y as double: %lf\n",*floatcastedptr2);
    printf("Value of z as double: %lf\n",*doublecastedptr2);
}

