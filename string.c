#include<stdio.h>

int length(){
    char s1[8] = "Anirudh";
    int i=0;
    int count=0;
    while(i<8){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u'){
            count++;
        }
        i++;
    }
    printf("Number of Vowels: %d\n",count);
}

int main(void){
    char s[8] = {'A','n','i','r','u','d','h'};
    char s1[8] = "Anirudh";

    printf("Char Array Value: %s\n",s);
    printf("String Literal Value: %s\n",s1);
    length();
}
