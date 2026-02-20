#include <stdio.h>
int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Number is One\n");
        break;
    case 2:
        printf("Number is Two\n");
        break;
    case 3:
        printf("Number is Three\n");
        break;
    case 4:
        printf("Number is Four\n");
        break;
    case 5:
        printf("Number is Five\n");
        break;
    default:
        printf("Out of Range\n");
        break;
    }
}

