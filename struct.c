#include<stdio.h>
struct dob
{
    unsigned int date:12;
    unsigned int month:10;
    unsigned int year:2000;
}
int main()
{
    printf("Size of struct: %ld\n",sizeof(struct dob));
    struct dob myDOB = {12,10,2000};
    printf("DOB: %d-%d-%d\n",myDOB.date,myDOB.month,myDOB.year);
}


