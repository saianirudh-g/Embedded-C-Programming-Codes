#include <stdio.h>
#include <string.h>
#define n 5
int arr[] = {1,2,3,4,5},a;
int i,length = sizeof(arr)/sizeof(arr[0]);
void arr1(){
    for(int i=0;i<n;i++){
        printf("array[%d]=%d\n",a,arr[i]);
    }
}
void arr2(){
    printf("Array Length: %d\n",length);
}
void arr3(){
    int rev[length],j=0;
    for(i=length-1;i>=0;i--){
        rev[j]=arr[i];
        j++;
    }
    printf("Reversed Array: ");
    for(i=0;i<length;i++){
        printf("%d",rev[i]);
    }
    printf(" \n");
}
void main(){
    arr1();
    arr2();
    arr3();
}
