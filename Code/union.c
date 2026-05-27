#include <stdio.h>
#include <string.h>

union college{
    int age;
    char name[30];
}
main(){
    union college student;
    student.age = 22;
    printf("Student Age: %d\n",student.age);
    student.name == "Anirudh";
    printf("Student Name: %s\n",student.name);

}

