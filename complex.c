#include <stdio.h>

struct Comp
{
    double real;
    double img;
};

void printCom(struct Comp c)
{
    printf("%.1lf + %.1lfi\n", c.real, c.img);
}

struct Comp add_comp(struct Comp c1, struct Comp c2)
{
    struct Comp ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}
struct Comp multiply_comp(struct Comp c1, struct Comp c2)
{
    struct Comp ans;
    ans.real = c1.real*c2.real - c1.img*c2.img;
    ans.img = c1.img*c2.real + c2.img*c1.real;
    return ans;
}
int main()
{
    struct Comp c1 = {4.1, 3.3};
    struct Comp c2 = {5.2, 3.7};

    printCom(add_comp(c1, c2));
    printCom(multiply_comp(c1, c2));
    return 0;
}