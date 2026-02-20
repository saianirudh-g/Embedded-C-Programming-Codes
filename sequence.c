#include<stdio.h>

int main(void){
    int arr[] = {6,7,5,9,1,2,3,4,5,6,9,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=4;i<n-3;i++){
        if(arr[i]==arr[i+1]){
            continue;
        }else if(arr[i]+1==arr[i+1]){
            printf("%d",arr[i]);
        }else{
            printf("%d",arr[i]);
        }
    }
}

