#include<stdio.h>

struct Student
{
    double weight;
    int roll;
    int age;
};

int main()
{
    struct Student s={.age=87, .roll=12, .weight=75.54};
    struct Student *sp;
    
    sp=&s;

    printf("%d\n%d\n%lf", sp->age, sp->roll, sp->weight);    
    return 0;
} 