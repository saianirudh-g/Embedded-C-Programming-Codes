#include <stdio.h>
#define a 3
#define b 3

int main(void){
    int i,j,c[a][b];
    printf("Enter rows and columns: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
            printf("%d\n",c[i][j]);
        }
    }
}

