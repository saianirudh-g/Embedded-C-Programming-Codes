#include <stdio.h>  
//#pragma pack(1)
struct student1 
{  
   int a;  
   char b;  
   char c;  
};  
struct student2 
{  
   char b;  
   int a;  
   char c;  
}; 
struct student3
{  
   char b;  
   char c;  
   int a;  
};
struct student4
{
   char a;
   double b;
   int c;
};

int main(void)  
{  
   struct student1 stud1; 
   struct student2 stud2; 
   struct student3 stud3; 
   struct student4 stud4;
   printf("The size of the student structure is %ld\n",sizeof(stud1));  
   printf("The size of the student structure is %ld\n",sizeof(stud2));  
   printf("The size of the student structure is %ld\n",sizeof(stud3)); 
   printf("The size of the student structure is %ld\n",sizeof(stud4));  
}  

