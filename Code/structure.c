#include <stdio.h>
#include <string.h>

typedef struct animal{
    int number;
    char *name;
    char *location;
}Animal;

int main(){
    Animal dog;
    dog.number = 10;
    dog.name="German Sheperd";
    dog.location="India";
    printf("Number of Dogs: %d\n",dog.number);
    printf("Dog Name: %s\n",dog.name);
    printf("Location: %s\n",dog.location);
}


