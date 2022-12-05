#include<stdio.h>

struct Student
{
    int roll;
    int age;
    float weight;
};

int main()
{
    int a;
    Student s;
    s.roll = 12;
    s.age = 45;
    s.weight = 45.32;

    printf("Roll: %d\nAge: %d\nWeight: %f\n", s.roll, s.age, s.weight);
    
    return 0;
}