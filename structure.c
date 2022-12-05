#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    int a;
    struct Student s1 ={ 12, "Shah Jalal", 45, 76.34};
    struct Student s2 ={ 23, "Farabi", 42, 74.14};

    printf("first student information\n");
    printf("Roll: %d\nName: %s\nAge: %d\nWeight: %f\n", s1.roll,s1.name, s1.age, s1.weight);
    printf("second student information\n");
    printf("Roll: %d\nName: %s\nAge: %d\nWeight: %f\n", s2.roll,s2.name, s2.age, s2.weight);
    return 0;
}